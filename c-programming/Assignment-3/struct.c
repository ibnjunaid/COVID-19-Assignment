struct container{
    int int_data;
    float float_data;
};

void input( struct container *ref){
    printf("Enter int value : ");
    scanf("%d",&ref->int_data);
    printf("Enter float value: ");
    scanf("%f",&ref->float_data);
}

void output( struct container *ref){
    printf("\nint DATA : %d",ref->int_data);
    printf("\nfloat DATA : %f",ref->float_data);
}
