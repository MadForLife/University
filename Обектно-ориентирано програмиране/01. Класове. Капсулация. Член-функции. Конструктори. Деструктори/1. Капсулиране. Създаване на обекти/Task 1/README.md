## Индекс на телесната маса според Световната здравна организация, 1995 г

**Дефинирайте клас Person който трябва да съдържа следните неща**  
  
**Конструктор по подразбиране, конструктор с параметри и деструктор**  
  
**Гетъри и сетъри за член-данните**  
  
  **Член-данни**
- име
- височина
- ръст

**Публични функции**
- void read
- double bmi
- void print
- void state
 ```
 static double caloriesIndex(const Person& lhs, const Person& rhs)
{
  return (lhs.height - rhs.height) * (lhs.height - rhs.height) +
	(lhs.weight - rhs.weight) * (lhs.weight - rhs.weight);
}
```

## Индес за телесна маса - таблица

| Състояние | Индекс на  телесна маса |
| ------------- | ------------- |
| Тежко недохранване (severely underweight) | < 16.0  |
| Недохранване (underweight) | 16.0 - 18.49  |
| Нормално тегло (normal) | 18.5 - 24.99 |
| Предзатлъстяване (overweight) | 25.0 - 29.99 |
| Затлъстяване I степен (severely overweight) | 30.0 - 34.99 |
| Затлъстяване II степен (obese) | 35.0 - 39.99 |
| Затлъстяване III степен (morbidly obese) | >= 40.0 |
