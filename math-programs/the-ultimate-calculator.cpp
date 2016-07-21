#include <iostream>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <string>
using namespace std;

int main() {
    beginning:
    //first four operation choices
    int ans;
    string first_operation_choice;
    system("cls");
    system("clear");
    cout << "Welcome to the ultimate calculator! Please type the operation you would like to compute." << "\n";
    cout << "Enter ADD for addition, SUB for subtraction, MULT for multiplication, and DIV for division. For many other operations, enter OTHER." << "\n";
    cin >> first_operation_choice;
    
    if (first_operation_choice == "OTHER") {
        middle:
        //other five operation choices
        cout << "Enter ABS for absolute value, FAC for factorial, EXP for exponents, SQRT for square root, CBRT for cube root, TRIG for a trigonometric functions menu, LCM for finding the least common multiple," << "\n" << " GCF for finding the greatest common factor, GEO for a geometry menu, and QUAD to go to the Quadratic Equation Solver. Enter BACK to go back to the other options." << "\n";
        string second_operation_choice;
        cin >> second_operation_choice;
        
        if (second_operation_choice == "ABS") {
            //absolute value
            cout << "You have selected absolute value." << "\n";
            int num;
            cout << "Enter the number you wish to find the absolute value of." << "\n";
            cin >> num;
            int absolute_value = abs(num);
            ans = absolute_value;
            cout << "The absolute value of " << num << " is " << absolute_value << "." << "\n";
            goto end;
        }
        
        else if (second_operation_choice == "FAC") {
            //factorial
            int n, factorial = 1;
            cout << "You have selected factorial." << "\n";
            cout << "Enter the number you wish to find the factorial of." << "\n";
            cin >> n;
            for (int f = 1; f <= n; f++) {
                factorial *= f;
            }
            ans = factorial;
            cout << n << "!" << " is equal to " << factorial << "." << "\n";
            goto end;
        }
        
        else if (second_operation_choice == "EXP") {
            //exponents
            cout << "You have selected exponents." << "\n";
            int base;
            cout << "Enter base." << "\n";
            cin >> base;
            int exponent;
            cout << "Enter exponent." << "\n";
            cin >> exponent;
            int power = pow(base, exponent);
            ans = power;
            cout << base << " raised to the power of " << exponent << " equals " << power << "." << "\n";
            goto end;
        }
        
        else if (second_operation_choice == "SQRT") {
            //square root
            cout << "You have selected square root." << "\n";
            int num;
            cout << "Enter the number you wish to find the square root of." << "\n";
            cin >> num;
            int square_root = sqrt(num);
            ans = square_root;
            cout << "The square root of " << num << " equals " << square_root << "." << "\n";
            goto end;
        }
        
        else if (second_operation_choice == "CBRT") {
            //cube root
            cout << "You have selected cube root." << "\n";
            int num;
            cout << "Enter the number you wish to find the cube root of." << "\n";
            cin >> num;
            int cube_root = cbrt(num);
            ans = cube_root;
            cout << "The cube root of " << num << " equals " << cube_root << "." << "\n";
            goto end;
        }
        
        else if (second_operation_choice == "TRIG") {
            trig_start:
            //trig options
            string trig_operation_choice;
            cout << "Enter SIN for sine, COS for cosine, and TAN for tangent. Enter BACK to go back to the other options." << "\n";
            cin >> trig_operation_choice;
            if (trig_operation_choice == "SIN") {
                //sine
                cout << "You have selected sine." << "\n";
                float opp;
                float hyp;
                cout << "Enter the opposite side length." << "\n";
                cin >> opp;
                cout << "Enter the hypotenuse length." << "\n";
                cin >> hyp;
                cout << "The sine of angle theta in this scenario is " << opp / hyp << "." << "\n";
                ans = opp / hyp;
                goto end;
            }
            
            else if (trig_operation_choice == "COS") {
                //cosine
                cout << "You have selected cosine." << "\n";
                float adj;
                float hyp;
                cout << "Enter the adjacent side length." << "\n";
                cin >> adj;
                cout << "Enter the hypotenuse length." << "\n";
                cin >> hyp;
                cout << "The cosine of angle theta in this scenario is " << adj / hyp << "." << "\n";
                ans = adj / hyp;
                goto end;
            }
            
            else if (trig_operation_choice == "TAN") {
                //tangent
                cout << "You have selected tangent." << "\n";
                float adj;
                float opp;
                cout << "Enter the adjacent side length." << "\n";
                cin >> adj;
                cout << "Enter the opposite side length." << "\n";
                cin >> opp;
                cout << "The tangent of angle theta in this scenario is " << opp / adj << "." << "\n";
                ans = opp / adj;
                goto end;
            }
            
            else if (trig_operation_choice == "BACK") {
                //back to first four options
                goto beginning;
            }
            
            else {
                //error message
                cout << "I'm sorry. You have not entered a valid operation choice. Please try again." << "\n";
                goto trig_start;
            }
        }
        
        else if (second_operation_choice == "LCM") {
            //least common multiple
            cout << "You have selected least common multiple." << "\n";
            int first_number;
            int second_number;
            int lcm = 0;
            cout << "Enter the first number." << "\n";
            cin >> first_number;
            cout << "Enter the second number." << "\n";
            cin >> second_number;
            int mult_firstnum;
            int mult_secondnum;
            for (int n = 1; (n = n); n++) {
                mult_firstnum = first_number * n;
                    for (int m = 1; (m = m); m++) {
                        mult_secondnum = second_number * m;
                        if (mult_secondnum == mult_firstnum) {
                            lcm = mult_secondnum;
                            goto end_LCM;
                        }
                        else if (mult_secondnum > mult_firstnum) {
                            goto end_firstnum_loop;
                        }
                    }
                end_firstnum_loop:
                    int unused;
            }
            end_LCM:
            cout << "The least common multiple of " << first_number << " and " << second_number << " is " << lcm << "." << "\n";
            ans = lcm;
            goto end;
        }
        
        else if (second_operation_choice == "GCF") {
            //greatest common factor
            cout << "You have selected greatest common factor." << "\n";
            int first_number;
            int second_number;
            int gcf;
            cout << "Enter the first number." << "\n";
            cin >> first_number;
            cout << "Enter the second number." << "\n";
            cin >> second_number;
            int fac_firstnum;
            int fac_secondnum;
            for (int n = first_number; (n=n); n--) {
                if (first_number % n == 0) {
                    fac_firstnum = n;
                    for (int m = second_number; (m=m); m--) {
                        if (second_number % n == 0) {
                            fac_secondnum = m;
                            if (fac_firstnum == fac_secondnum) {
                                gcf = fac_firstnum;
                                goto end_GCF;
                            }
                            else if (fac_firstnum > fac_secondnum) {
                                goto end_check_firstnum;
                            }
                            else if (fac_secondnum > fac_firstnum) {
                                goto end_check_secondnum;
                            }
                        }
                        end_check_secondnum:
                        int unused;
                    }
                }
                end_check_firstnum:
                int unused;
            }
            end_GCF:
            cout << "The greatest common factor of " << first_number << " and " << second_number << " is " << gcf << "." << "\n";
            ans = gcf;
            goto end;
        }
        
        else if (second_operation_choice == "QUAD") {
            //quadratic equation solver + descriminant finder
            cout << "In standard quadratic format, please input A, B, and C, each followed by the return or enter key." << "\n";
            int var_a;
            int var_b;
            int var_c;
            int x_1;
            int x_2;
            int dis;
            cin >> var_a;
            cin >> var_b;
            cin >> var_c;
            dis = (var_b * var_b) - 4 * (var_a * var_c);
            x_1 = ((var_b * -1) + sqrt(var_b * var_b - 4 * var_a * var_c)) / (2 * var_a);
            x_2 = ((var_b * -1) - sqrt(var_b * var_b - 4 * var_a * var_c)) / (2 * var_a);
            if (dis < 0) {
                cout << "There are no possible solutions or roots for the quadratic equation " << var_a << "x + (" << var_b << "x) + (" << var_c << ")." << "\n" << "The discriminant was " << dis << "." << "\n";
                goto end;
            }
            else if (dis == 0) {
                cout << "There is one possible solution or root for the quadratic equation " << var_a << "x + (" << var_b << "x) + (" << var_c << "). It is " << x_1 << "." << "\n" << "The discriminant was " << dis << "." << "\n";
                goto end;
            }
            else if (dis > 0) {
                cout << x_1 << x_2;
                cout << "There are two possible solutions or roots for the quadratic equation " << var_a << "x + (" << var_b << "x) + (" << var_c << "). They are " << x_1 << " and " << x_2 << "." << "\n" << "The discriminant was " << dis << "." << "\n";
                goto end;
            }
        }
        
        else if (second_operation_choice == "GEO") {
            geo_start:
            //geo options
            string geo_operation_choice;
            cout << "Enter COMP to calculate a complementary angle, SUPP to calculate a supplementary angle, and 3RDANGLE to calculate the third angle of a triangle. Enter BACK to go back to the other options." << "\n";
            cin >> geo_operation_choice;
            if (geo_operation_choice == "COMP") {
                //complementary angles
                cout << "You have selected complementary angles." << "\n";
                float angle_measure;
                cout << "Enter the measure of the angle you wish to find the complement of." << "\n";
                cin >> angle_measure;
                float comp_angle_measure = 90 - angle_measure;
                ans = comp_angle_measure;
                cout << "The complement of " << angle_measure << " is " << comp_angle_measure << "." << "\n";
                goto end;
            }
            
            else if (geo_operation_choice == "SUPP") {
                //supplementary angles
                cout << "You have selected supplementary angles." << "\n";
                float angle_measure;
                cout << "Enter the measure of the angle you wish to find the supplement of." << "\n";
                cin >> angle_measure;
                float supp_angle_measure = 180 - angle_measure;
                ans = supp_angle_measure;
                cout << "The supplement of " << angle_measure << " is " << supp_angle_measure << "." << "\n";
                goto end;
            }
            
            else if (geo_operation_choice == "3RDANGLE") {
                //third angles in a triangle
                cout << "You have selected third angle in a triangle." << "\n";
                float angle_measure_1;
                cout << "Enter the first triangle angle measure." << "\n";
                cin >> angle_measure_1;
                float angle_measure_2;
                cout << "Enter the first triangle angle measure." << "\n";
                cin >> angle_measure_2;                
                float third_angle_measure = 180 - angle_measure_1 - angle_measure_2;
                ans = third_angle_measure;
                cout << "The third angle of the triangle is " << third_angle_measure << "." << "\n";
                goto end;
            }            

            else if (geo_operation_choice == "BACK") {
                //back to first four options
                goto beginning;
            }
            
            else {
                //error message
                cout << "I'm sorry. You have not entered a valid operation choice. Please try again." << "\n";
                goto geo_start;
            }            
        }
        
        else if (second_operation_choice == "BACK") {
            //back to first four options
            goto beginning;
        }
        
        else {
            //error message
            cout << "I'm sorry. You have not entered a valid operation choice. Please try again." << "\n";
            goto middle;
        }
    }

    else if (first_operation_choice == "ADD") {
        //addition
        cout << "You have selected addition. How many numbers would you like to add?" << "\n";
        int addends;
        cin >> addends;
        int sum = 0;
        for (int i = 0; i < addends; i++) {
            int addend;
            cout << "Enter addend #" << i+1 << "." << "\n";
            cin >> addend;
            sum += addend;
        }
        cout << "The sum of the numbers you have entered is " << sum << "." << "\n";
        ans = sum;
        goto end;
    }
    
    else if (first_operation_choice == "SUB") {
        //subtraction
        cout << "You have selected subtraction. NOTE: You may only provide one minuend and one subtrahend. Perform multiple computations if you want to subtract more than two numbers." << "\n";
        cout << "Enter minuend." << "\n";
        int minuend;
        cin >> minuend;    
        cout << "Enter subtrahend." << "\n";
        int subtrahend;
        cin >> subtrahend;
        int difference = minuend - subtrahend;
        cout << "The difference is " << difference << "." << "\n";
        ans = difference;
        goto end;
    }
    
    else if (first_operation_choice == "MULT") {
        //multiplication
        cout << "You have selected multiplication. How many numbers would you like to multiply?" << "\n";
        int multiples;
        cin >> multiples;
        int product = 1;
        for (int i = 0; i < multiples; i++) {
            int multiple;
            cout << "Enter multiple #" << i+1 << "." << "\n";
            cin >> multiple;          
            product *= multiple;
        }
        cout << "The product of the " << multiples << " numbers you have entered is " << product << "." << "\n";
        ans = product;
        goto end;
    }    
    
    else if (first_operation_choice == "DIV") {
        //division
        cout << "You have selected division. NOTE: You may only provide one dividend and one divisor. Perform multiple computations if you want to divide more than two numbers." << "\n";
        cout << "Enter dividend." << "\n";
        int dividend;
        cin >> dividend;
        cout << "Enter divisor." << "\n";
        int divisor;
        cin >> divisor;
        int quotient = dividend / divisor;
        cout << "The quotient is " << quotient << "." << "\n";
        ans = quotient;
        goto end;
    }
    
    else {
        //error message
        cout << "I'm sorry. You have not entered a valid operation choice. Please try again." << "\n";
        goto beginning;
    }
    
    end:
    //another operation?
    cout << "Would you like to perform another calculation? Enter YES if so and NO if not." << "\n";
    string next_operation;
    cin >> next_operation;
    if (next_operation == "YES") {
        //back to first four operation choices
        goto beginning;    
    }
    else if (next_operation == "NO") {
        //exits program
        cout << "Thank you for using the ultimate calculator! Have a nice day!" << "\n";
        exit(0);
    }
    else {
        //error message
        cout << "I'm sorry. You have not entered a valid choice. Please try again." << "\n";
        goto end;
    }
    return 0;
}
