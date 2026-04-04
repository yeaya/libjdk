#include <javax/print/attribute/standard/PrinterLocation.h>
#include <java/util/Locale.h>
#include <javax/print/attribute/TextSyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $TextSyntax = ::javax::print::attribute::TextSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

int32_t PrinterLocation::hashCode() {
	 return this->$TextSyntax::hashCode();
}

$String* PrinterLocation::toString() {
	 return this->$TextSyntax::toString();
}

$Object* PrinterLocation::clone() {
	 return this->$TextSyntax::clone();
}

void PrinterLocation::finalize() {
	this->$TextSyntax::finalize();
}

void PrinterLocation::init$($String* location, $Locale* locale) {
	$TextSyntax::init$(location, locale);
}

bool PrinterLocation::equals(Object$* object) {
	return ($TextSyntax::equals(object) && $instanceOf(PrinterLocation, object));
}

$Class* PrinterLocation::getCategory() {
	return PrinterLocation::class$;
}

$String* PrinterLocation::getName() {
	return "printer-location"_s;
}

PrinterLocation::PrinterLocation() {
}

$Class* PrinterLocation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterLocation, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(PrinterLocation, init$, void, $String*, $Locale*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PrinterLocation, equals, bool, Object$*)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(PrinterLocation, getCategory, $Class*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(PrinterLocation, getName, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.print.attribute.standard.PrinterLocation",
		"javax.print.attribute.TextSyntax",
		"javax.print.attribute.PrintServiceAttribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrinterLocation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PrinterLocation));
	});
	return class$;
}

$Class* PrinterLocation::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax