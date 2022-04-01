void fruitRate(Fruit input)
{
	switch (input)
	{
	case Fruit::Apple:
		cout << "Good and healthy";
		break;
	case Fruit::Banana:
		cout << "Tasty and caloric";
		break;
	case Fruit::Grape:
		cout << "best from fruits because u can make wine";
		break;
	case Fruit::Blueberry:
		cout << "best in taste";
		break;
	case Fruit::Tomato:
		cout << "haven't know it's a fruit";
		break;
	default:
		cout << "never heard about that kind of fruit";
		break;
	}
}