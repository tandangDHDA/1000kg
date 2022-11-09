void taoDanhSach(1 *&pdau) {
    int repeat;
    1 *p = pdau;
    do{
        if(pdau == NULL) {
            pdau = (1*)malloc(sizeof(1));
            p = pdau;
        } else {
            p = pdau;
            while(p->tiep !=NULL) p = p->tiep;
            p->tiep = (1*)malloc(sizeof(1));
            p = p->tiep;
        }
        printf("Nhap du lieu cho danh sach : \n");
        scanf("%d",&(p->dulieu));
        p->tiep = NULL;
        printf("Ban co muon tiep tuc hay khong ? ");
    }while(repeat !=0);
}