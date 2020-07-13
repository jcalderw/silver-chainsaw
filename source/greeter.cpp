#include <greeter/greeter.h>

#include <utility>

using namespace greeter;

[[maybe_unused]] Greeter::Greeter(std::string _name) : name(std::move(_name)) {
}

[[maybe_unused]] std::string Greeter::greet(LanguageCode lang) const {
  switch (lang) {
    default:
    case LanguageCode::EN:
      return "Hello, " + name + "!";
    case LanguageCode::DE:
      return "Hallo " + name + "!";
    case LanguageCode::ES:
      return "¡Hola " + name + "!";
    case LanguageCode::FR:
      return "Bonjour " + name + "!";
  }
}
