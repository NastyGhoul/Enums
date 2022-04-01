void mathThing(Shape input)
{
	double a;
	double b;
	double result;
	switch (input)
	{
	case Shape::rectangle:
		cout << "Enter high\n";
		cin >> a;
		cout << "enter length\n";
		cin >> b;
		result = a * b;
		cout << "your result = " << result << endl;
		break;

	case Shape::square:
		cout << "Enter number\n";
		cin >> a;
		result = a * a;
		cout << "your result = " << result << endl;
		break;

	case Shape::circle:
		cout << "Enter radius\n";
		cin >> a;
		result = a * a * M_PI;
		cout << "your result = " << result << endl;
		break;

	case Shape::triangle:
		cout << "Enter high\n";
		cin >> a;
		cout << "Enter base length\n";
		cin >> b;
		result = a * b / 2;
		cout << "your result = " << result << endl;
		break;

	case Shape::trapezoid:
		double high;
		cout << "Enter high\n";
		cin >> high;
		cout << "Enter bottom base length\n";
		cin >> a;
		cout << "Enter upper base length\n";
		cin >> b;
		result = (a + b) * high / 2;
		cout << "your result = " << result << endl;
		break;

	default:
		cout << "what a kinky shape!";
		break;
	}
}