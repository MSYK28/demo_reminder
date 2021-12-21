import 'package:flutter/material.dart';
import 'package:epap/datepicker.dart';

class Demo extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
        debugShowCheckedModeBanner: false,
        theme: ThemeData(
          accentColor: Colors.purple[900],
          primaryColor: Colors.purple[900],
        ),
        home: Scaffold(
          body: Center(
            child: DatePicker(),
          ),
        ));
  }
}
