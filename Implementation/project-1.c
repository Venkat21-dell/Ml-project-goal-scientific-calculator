#include"header.c" /* header file */
 int calculator_operations = 0;

  trigonometric tri;
 calculate comp;
 static int con=1;
 void cal_app(void);
 enum operations{ add=1, sub, mul, divi, powe, sinee, cose, root, tangent, secant, cosecant, cote, expo, fa, loge, close}; 
int main(){  
    printf("\n\t\t\t\tSCIENTIFIC_CALCULATOR\n");

while(con==1){
  cal_app();
}
if(con!=1){
    printf("COMEBACK AGAIN ....!!");
}
    }
void cal_app(){
    printf("\nAvailable Operations\n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("\n1. sum\t2. Subtract\t3. Multiply\t4. Divide\t5. power\t6. sin\t7. cos\n");
    printf("\n8. root\t9. tan\t10. sec\t11. cosec\t12. cot\t13. exp\t14. factorial\t15. log\n\n16.EXIT\n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("Note:- ALL THE TRIGONOMETIC INPUTS ARE RADIAN VALUES\n");   
    printf("\n\tEnter your choice\n");
    scanf("%d",&calculator_operations);
    if(calculator_operations>=1 && calculator_operations<=5){
                   printf("Enter value1\n");
                    scanf("%d",&comp.value1);
                    printf("Enter value2\n");
                    scanf("%d",&comp.value2);
    }
    else if(calculator_operations>=6 && calculator_operations<=15){
        printf("Enter value3\n");
        scanf("%d",&tri.value3);
    }
        switch(calculator_operations){
    			case add:
    				sum(&comp);
    				break;
    			case sub:
    				substraction(&comp);
    				break;
    			case mul:
    				multiplication(&comp);
    				break;
				case divi:
    				division(&comp);
    				break;
                case powe:
    				power(&comp);
    				break;        
    			case sinee:
    				sine(&tri);
    				break;
    			case cose:
    				cosine(&tri);
    				break;
                case root:
    				squareroot(&tri);
                    break;
                case tangent:
    				ttan(&tri);
                    break;
                case secant:
    				sec(&tri);
                    break;
                case cosecant:
    				cosec(&tri);
                    break;
                case cote:
    				cot(&tri);
                    break; 
                case expo:
    				exponent(&tri);
                    break; 
                case fa:
    				factorial(&tri);
                    break;     
                case loge:
                    logbase10(&tri);
                    break;                      
                case close:
                printf("COMEBACK AGAIN ....!!");
                  exit(0);
                  
                default:
                   printf("\n\tOPERATION NOT FOUND\t ->  ##PLEASE RETRY\n");
                   exit(0);
    }
    printf("press 1 to continue\n");
    scanf("%d",&con);
}
