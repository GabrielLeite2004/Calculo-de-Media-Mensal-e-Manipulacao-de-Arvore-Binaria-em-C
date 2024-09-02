

int copiarElemento(elemento1 *destino, const elemento1 origem)
{
    strcpy(destino->regiao_sigla, origem.regiao_sigla);
    strcpy(destino->estado_sigla, origem.estado_sigla);
    strcpy(destino->municipio, origem.municipio);
    strcpy(destino->revenda, origem.revenda);
    strcpy(destino->cnpj_revenda, origem.cnpj_revenda);
    strcpy(destino->nome_rua, origem.nome_rua);
    destino->numero_rua = origem.numero_rua;
    strcpy(destino->complemento, origem.complemento);
    strcpy(destino->bairro, origem.bairro);
    strcpy(destino->cep, origem.cep);
    strcpy(destino->produto, origem.produto);
    strcpy(destino->data_coleta, origem.data_coleta);
    destino->valor_venda = origem.valor_venda;
    destino->valor_compra = origem.valor_compra;
    strcpy(destino->unidade_medida, origem.unidade_medida);
    strcpy(destino->bandeira, origem.bandeira);

    return 0;
}

int copiarElemento2(elemento *destino, const elemento origem)
{
 // strcpy(destino->regiao_sigla, origem.regiao_sigla);
  //strcpy(destino->estado_sigla, origem.estado_sigla);
  //strcpy(destino->municipio, origem.municipio);
  //strcpy(destino->cnpj_revenda, origem.cnpj_revenda);
  strcpy(destino->data_coleta, origem.data_coleta);
  destino->valor_venda = origem.valor_venda;
  
}


int elementos_iguas(elemento1 item1, elemento1 item2)
{

    // printf("data 1 -> %s%s", item1.bairro, item2.bairro);
    //printf("\ndata 2 -> %s%s\n", item1.municipio, item1.municipio);


    if(strcmp (item1.regiao_sigla, item2.regiao_sigla) == 0)
    {
        if(strcmp (item1.estado_sigla, item2.estado_sigla) == 0)
        {
            if(strcmp (item1.municipio, item2.municipio) == 0)
            {
                if(strcmp (item1.revenda, item2.revenda) == 0)
                {
                    if(strcmp (item1.cnpj_revenda, item2.cnpj_revenda) == 0)
                    {
                        if(strcmp (item1.nome_rua, item2.nome_rua) == 0)
                        {
                            if(strcmp (item1.numero_rua, item2.numero_rua) == 0)
                            {
                                if(strcmp (item1.complemento, item2.complemento) == 0)
                                {
                                    if(strcmp (item1.bairro, item2.bairro) == 0)
                                    {
                                        if(strcmp (item1.cep, item2.cep) == 0)
                                        {
                                            if(strcmp (item1.produto, item2.produto) == 0)
                                            {
                                                if(strcmp (item1.data_coleta, item2.data_coleta) == 0)
                                                {
                                                    if(item1.valor_venda == item2.valor_venda)
                                                    {
                                                        if(item1.valor_compra == item2.valor_compra)
                                                        {
                                                            if(strcmp (item1.unidade_medida, item2.unidade_medida) == 0)
                                                            {
                                                                if(strcmp (item1.bandeira, item2.bandeira) == 0)
                                                                {
                                                                    return 0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 1;
}








int Calcula_media(tree tr, int tipo)
{
    //system("pause");
    tree pai;
    if(tipo == 1)
    {
        pai = tr;
    }
    if(tipo == 2)
    {
        pai = tr->esq;
    }
    if(tipo == 3)
    {
        pai = tr->esq->esq;
    }
    if(tipo == 4)
    {
        pai = tr->esq->esq->esq;
    }
    if(tipo == 5)
    {
        pai = tr->esq->esq->esq->esq;
    }
    if(tipo == 6)
    {
        pai = tr->esq->esq->esq->esq->esq;

    }
    if(tipo == 7)
    {
        pai = tr->esq->esq->esq->esq->esq->esq;

    }
    if(tipo == 8)
    {
        pai = tr->esq->esq->esq->esq->esq->esq->esq;
    }
    if(tipo == 9)
    {
        pai = tr->esq->esq->esq->esq->esq->esq->esq->esq;
    }
    if(tipo == 10)
    {
        pai = tr->esq->esq->esq->esq->esq->esq->esq->esq->esq;
    }

    float Valor_mes[12] = {0.00};
    int quantidade[12] = {0};
    while(pai->dir != NULL)
    {

                if(pai->info.data_coleta[4] == '1' && pai->info.data_coleta[3] == '0')
                {
                    Valor_mes[0] = Valor_mes[0] + pai->info.valor_venda;
                    quantidade[0] = quantidade[0] + 1;

                   // printf("\n%2.f", Valor_mes[0]);

                }
                if(pai->info.data_coleta[4] == '2' && pai->info.data_coleta[3] == '0')
                {

                    Valor_mes[1] = Valor_mes[1] + pai->info.valor_venda;
                    quantidade[1] = quantidade[1] + 1;

                }
                if(pai->info.data_coleta[4] == '3' && pai->info.data_coleta[3] == '0')
                {

                    Valor_mes[2] = Valor_mes[2] + pai->info.valor_venda;
                    quantidade[2] = quantidade[2] + 1;

                }
                if(pai->info.data_coleta[4] == '4' && pai->info.data_coleta[3] == '0')
                {

                    Valor_mes[3] = Valor_mes[3] + pai->info.valor_venda;
                    quantidade[3] = quantidade[3] + 1;
                }

                if(pai->info.data_coleta[4] == '5' && pai->info.data_coleta[3] == '0')
                {

                    Valor_mes[4] = Valor_mes[4] + pai->info.valor_venda;
                    quantidade[4] = quantidade[4] + 1;

                }
                if(pai->info.data_coleta[4] == '6' && pai->info.data_coleta[3] == '0')
                {

                    Valor_mes[5] = Valor_mes[5] + pai->info.valor_venda;
                    quantidade[5] = quantidade[5] + 1;

                }
                if(pai->info.data_coleta[4] == '7' && pai->info.data_coleta[3] == '0')
                {
                    Valor_mes[6] = Valor_mes[6] + pai->info.valor_venda;
                    quantidade[6] = quantidade[6] + 1;

                }
                if(pai->info.data_coleta[4] == '8' && pai->info.data_coleta[3] == '0')
                {
                    Valor_mes[7] = Valor_mes[7] + pai->info.valor_venda;
                    quantidade[7] = quantidade[7] + 1;

                }
                if(pai->info.data_coleta[4] == '9' && pai->info.data_coleta[3] == '0')
                {

                    Valor_mes[8] = Valor_mes[8] + pai->info.valor_venda;
                    quantidade[8] = quantidade[8] + 1;

                }
                if(pai->info.data_coleta[4] == '0' && pai->info.data_coleta[3] == '1')
                {
                    Valor_mes[9] = Valor_mes[9] + pai->info.valor_venda;
                    quantidade[9] = quantidade[9] + 1;
                }
                if(pai->info.data_coleta[4] == '1' && pai->info.data_coleta[3] == '1' )
                {
                    Valor_mes[10] = Valor_mes[10] + pai->info.valor_venda;
                    quantidade[10] = quantidade[10] + 1;
                }
                if(pai->info.data_coleta[4] == '2' && pai->info.data_coleta[3] == '1' )
                {
                    Valor_mes[11] = Valor_mes[11] + pai->info.valor_venda;
                    quantidade[11] = quantidade[11] + 1;

                }

        pai = pai->dir;
    }


    int contagem = 0;
    while(contagem <= 11)
    {
        if(quantidade[contagem] == 0)
        {
            //printf("\nquantidade igual a %d", quantidade[11]);
            quantidade[contagem] = 1;
        }
      else
        {
         // printf("\nquantidade igual a %d", quantidade[contagem]);

        }
        contagem = contagem + 1;
    }

    printf("\n-----------------------------------------------------------------\n");
    printf("Janeiro: %.2f R$\n", (Valor_mes[0]/quantidade[0]));
    printf("Fevereiro: %.2f R$\n",(Valor_mes[1]/quantidade[1]));
    printf("Março: %.2f R$\n", (Valor_mes[2]/quantidade[2]));
    printf("Abril: %.2f R$\n", (Valor_mes[3]/quantidade[3]));
    printf("Maio: %.2f R$\n", (Valor_mes[4]/quantidade[4]));
    printf("Junho: %.2f R$\n", (Valor_mes[5]/quantidade[5]));
    printf("Julho: %.2f R$\n", (Valor_mes[6]/quantidade[6]));
    printf("Agosto: %.2f R$\n", (Valor_mes[7]/quantidade[7]));
    printf("Setembro: %.2f R$\n", (Valor_mes[8]/quantidade[8]));
    printf("Outubro: %.2f R$\n", (Valor_mes[9]/quantidade[9]));
    printf("Novembro: %.2f R$\n", (Valor_mes[10]/quantidade[10]));
    printf("Dezembro: %.2f R$\n", (Valor_mes[11]/quantidade[11]));
    printf("-----------------------------------------------------------------\n");



}











/* criarNodoEsq(Arvore, VL_NULO2);
    int contagem = 1;
    while (contagem <= 10)
    {
        if(contagem == 1)
        {
            aux = criarNodoDir(Arvore, VL_NULO1);

        }
        else
        {
            aux = criarNodoDir(aux, VL_NULO1);

        }
        contagem = contagem + 1;
    }

   // printf("%s", Arvore->info.municipio);
   // printf("\n%s", Arvore->dir->info.municipio);

    int contagem = 1 ;

    elemento antigo = VL_NULO;

    while(contagem <= 264)
    {
        elemento e = VL_NULO1;
        e.valor_compra = contagem;
        adicionarDirPai(Arvore, antigo, e);
        antigo = e;
        contagem = contagem + 1;
    }
    imprimeArvore(Arvore);*/







