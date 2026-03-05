package com.graduacao.oo_2_1;

import com.graduacao.oo_2_1.classes.Animal;
import com.graduacao.oo_2_1.classes.Musica;

public class OO_2_1 {

    public static void main(String[] args) {
        
        //exercicio05();
        //exercicio08();
        
    }
    
    public static void exercicio05(){
        Animal a1 = new Animal();
        
        a1.preencher();
        Animal a2 = new Animal("Lili", "Gato", "Tricolor", 6, 10);
        
        Animal a3 = new Animal(a1);
        a3.setNome("Rex");
        
        System.out.println(a1);
        System.out.println(a2);
        System.out.println(a3);
    }
    
    public static void exercicio08(){
        Musica m1 = new Musica();
        
        m1.preencher();
        
        System.out.println(m1);
        m1.tocarMusica();
        
        m1.desligarMusica();
    }
    
    
}
