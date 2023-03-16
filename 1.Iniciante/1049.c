int main() {
    char vert[10], class[10], diet[10];
    scanf("%s %s %s", vert, class, diet);

    if (vert[0] == 'v') {
        if (class[0] == 'a') {
            if (diet[0] == 'c')
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else {
            if (diet[0] == 'o')
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }
    else {
        if (class[0] == 'i') {
            if (diet[3] == 'a')
                printf("pulga\n");
            else
                printf("lagarta\n");
        }
        else {
            if (diet[0] == 'h')
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }
}