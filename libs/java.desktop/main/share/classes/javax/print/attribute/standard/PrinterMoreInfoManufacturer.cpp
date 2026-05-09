#include <javax/print/attribute/standard/PrinterMoreInfoManufacturer.h>
#include <java/net/URI.h>
#include <javax/print/attribute/URISyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $URISyntax = ::javax::print::attribute::URISyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

int32_t PrinterMoreInfoManufacturer::hashCode() {
	return this->$URISyntax::hashCode();
}

$String* PrinterMoreInfoManufacturer::toString() {
	return this->$URISyntax::toString();
}

$Object* PrinterMoreInfoManufacturer::clone() {
	return this->$URISyntax::clone();
}

void PrinterMoreInfoManufacturer::finalize() {
	this->$URISyntax::finalize();
}

void PrinterMoreInfoManufacturer::init$($URI* uri) {
	$URISyntax::init$(uri);
}

bool PrinterMoreInfoManufacturer::equals(Object$* object) {
	return ($URISyntax::equals(object) && $instanceOf(PrinterMoreInfoManufacturer, object));
}

$Class* PrinterMoreInfoManufacturer::getCategory() {
	return PrinterMoreInfoManufacturer::class$;
}

$String* PrinterMoreInfoManufacturer::getName() {
	return "printer-more-info-manufacturer"_s;
}

PrinterMoreInfoManufacturer::PrinterMoreInfoManufacturer() {
}

$Class* PrinterMoreInfoManufacturer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterMoreInfoManufacturer, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Ljava/net/URI;)V", nullptr, $PUBLIC, $method(PrinterMoreInfoManufacturer, init$, void, $URI*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PrinterMoreInfoManufacturer, equals, bool, Object$*)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(PrinterMoreInfoManufacturer, getCategory, $Class*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(PrinterMoreInfoManufacturer, getName, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.print.attribute.standard.PrinterMoreInfoManufacturer",
		"javax.print.attribute.URISyntax",
		"javax.print.attribute.PrintServiceAttribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrinterMoreInfoManufacturer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PrinterMoreInfoManufacturer));
	});
	return class$;
}

$Class* PrinterMoreInfoManufacturer::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax