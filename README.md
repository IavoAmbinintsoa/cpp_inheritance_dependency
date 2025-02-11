# cpp_inheritance_dependency
# **Inheritance and Dependency in C++**  

This repository demonstrates the concepts of **inheritance** and **dependency** in C++. It includes six classes and two namespaces to model a structured system.  

## **Class Structure**  

### **1. Infrastructure Hierarchy**  
- `Infrastructure` (Base class)  
- `Etablissement` (Derived from `Infrastructure`)  
- `Hopital` (Derived from `Etablissement`)  

### **2. Person Hierarchy**  
- `Personne` (Base class)  
- `Etudiant` (Derived from `Personne`)  
- `Medecin` (Derived from `Personne`)  

## **Namespaces**  

- `Individu` → Groups all person-related classes (`Personne`, `Etudiant`, `Medecin`).  
- `Place` → Groups all structure-related classes (`Infrastructure`, `Etablissement`, `Hopital`).  

## **Compilation**  

To compile the project, use the following command:  

```bash
g++ -o ville \
    Individu/Etudiant/Etudiant.cpp \
    Individu/Medecin/Medecin.cpp \
    Individu/Personne.cpp \
    Infrastructure/Etablissement/Etablissement.cpp \
    Infrastructure/Hopital/Hopital.cpp \
    Infrastructure/Infrastructure.cpp \
    main.cpp test.cpp
```
This project provides a practical example of **object-oriented programming** principles, including inheritance and namespace usage in C++.
