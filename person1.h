class person
   {
private:

public:
    char vorname[100];
    char nachname[100];
    char patronym[100];
    char middlename[100];
    char titel[100];
    char herkunft;
    void askEnglish(struct person *partner);
    void frageDeutsch(struct person *partner);
    void greetEnglish(struct person *partner);
    void gruesseDeutsch(struct person *partner);
};
