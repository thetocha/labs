#include "calculator.h"


Calculator::Calculator(){
    result = 0;
};

void Calculator::EnteringProblem(){
    cout << "Enter your problem" << endl;
    getline(cin, problem);
}

int Calculator::Result(){
    toPolish();
    for(int i=0; i < problem.size(); ++i){
        if(IsNumber(problem[i])){
            int operand;
            operand = problem[i] - '0';
            if(IsNumber(problem[i+1])){
                while(IsNumber(problem[i]) && IsNumber(problem[i+1])){
                    operand *= 10;
                    int operand2;
                    operand2 = problem[i+1] - '0';
                    operand += operand2;
                    ++i;
                }
            }
            vals << operand;
        }else if(IsOperator(problem[i])){
            if(problem[i] == '#'){
                int negative;
                vals >> negative;
                negative *= -1;
                result = negative;
                vals << result;
            }else{
                int a;
                int b;
                if(!vals.IsEmpty()){
                    vals >> b;
                }else{
                    cerr << "To many operators" << endl;
                    exit(5);
                }
                if(!vals.IsEmpty()){
                    vals >> a;
                    result = ResultOfOperation(a,b,problem[i]);
                    vals << result;
                }else{
                    cerr << "To many operators" << endl;
                    exit(5);
                }
            }

        }
    }
    if(vals.IsEmpty()){
        cerr << "There are to many operands, please chek the problem" << endl;
        exit(4);
    }
    return result;
}

string Calculator::toPolish(){
    string polish_problem;
    RemoveSpaces();
    for(int i=0; i < problem.size(); ++i){
        if(IsOperator(problem[i])){
            if(ops.IsEmpty()){
                if(problem[i] == '-' && (i == 0 || !IsNumber(problem[i-1]))){
                    problem[i] = '#';
                    polish_problem += problem[i];
                }else{
                    ops << problem[i];
                }
            }
            else{
                char op;
                ops >> op;
                if(problem[i] == '('){
                    ops << op;
                    ops << problem[i];
                }else if(problem[i] == ')'){
                    ops << op;
                    char  opeartor;
                    ops >> opeartor;
                    while(opeartor != '('){
                        polish_problem.push_back(opeartor);
                        if(ops.IsEmpty()){
                            cerr <<"There are problems with brackets";
                            exit(1);
                        }else
                            ops >> opeartor;
                    }
                }else if(problem[i] == '#'){
                    ops << op;
                    continue;
                }else if(problem[i] == '-' && (i == 0 || !IsNumber(problem[i-1]))){
                    problem[i] = '#';
                    ops << op;
                    polish_problem += problem[i];
                }else if(OperationsPriority(problem[i]) > OperationsPriority(op)){
                    ops << op;
                    ops << problem[i];
                }else if(OperationsPriority(problem[i]) < OperationsPriority(op)){
                    polish_problem += op;
                    ops << problem[i];
                }else if(OperationsPriority(problem[i]) == OperationsPriority(op)){
                    polish_problem += op;
                    ops << problem[i];
                }
            }
        }else if(IsNumber(problem[i])){
            if(IsNumber(problem[i+1])){
                if (i == 0){
                    polish_problem += problem[i];
                }else if(problem[i-1] == '#'){
                    polish_problem.pop_back();
                    polish_problem += problem[i];
                    problem[i] = '#';
                    polish_problem += '#';
                }else
                    polish_problem += problem[i];
            }else{
                if(i==0){
                    polish_problem += problem[i];
                    polish_problem += ' ';
                }else if(problem[i-1] == '#'){
                    polish_problem.pop_back();
                    polish_problem += problem[i];
                    polish_problem += '#';
                    polish_problem += ' ';
                }else{
                    polish_problem += problem[i];
                    polish_problem += ' ';
                }
            }
        }else{
            cerr <<"The're problems with signs";
            exit(2);
        }
    }
    while(!ops.IsEmpty()){
        char op;
        ops >> op;
        if (op == '('){
            cerr <<"There are problems with brackets";
            exit(1);
        }else
            polish_problem += op;
    }
    problem = polish_problem;
    return problem;
}

 bool Calculator::IsNumber(char symbol){
    return (symbol >= '0' && symbol <= '9');
};

 bool Calculator::IsOperator(char symbol){
    return (symbol == '(' || symbol == ')' || symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '#');
};

 int Calculator::OperationsPriority(char op){
    if(op == ')') {return 6;}
    if(op == '(') {return 1;}
    if(op == '+' || op == '-') {return 2;}
    if(op == '*' || op == '/')  {return 3;}
    return -1;
};
 int Calculator::ResultOfOperation (int a, int b, char op){
    if(op == '+')
        return a + b;
    else if(op == '-')
        return a - b;
    else if(op == '*')
        return a * b;
    else if(op == '/')
        return a / b;
    return 0;
};

string* Calculator::RemoveSpaces(){
    problem.erase(remove_if(problem.begin(), problem.end(), isspace), problem.end());
    return &problem;
}


