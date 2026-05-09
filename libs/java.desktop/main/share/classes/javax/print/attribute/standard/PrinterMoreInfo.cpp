#include <javax/print/attribute/standard/PrinterMoreInfo.h>
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

int32_t PrinterMoreInfo::hashCode() {
	return this->$URISyntax::hashCode();
}

$String* PrinterMoreInfo::toString() {
	return this->$URISyntax::toString();
}

$Object* PrinterMoreInfo::clone() {
	return this->$URISyntax::clone();
}

void PrinterMoreInfo::finalize() {
	this->$URISyntax::finalize();
}

void PrinterMoreInfo::init$($URI* uri) {
	$URISyntax::init$(uri);
}

bool PrinterMoreInfo::equals(Object$* object) {
	return ($URISyntax::equals(object) && $instanceOf(PrinterMoreInfo, object));
}

$Class* PrinterMoreInfo::getCategory() {
	return PrinterMoreInfo::class$;
}

$String* PrinterMoreInfo::getName() {
	return "printer-more-info"_s;
}

PrinterMoreInfo::PrinterMoreInfo() {
}

$Class* PrinterMoreInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterMoreInfo, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Ljava/net/URI;)V", nullptr, $PUBLIC, $method(PrinterMoreInfo, init$, void, $URI*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PrinterMoreInfo, equals, bool, Object$*)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(PrinterMoreInfo, getCategory, $Class*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(PrinterMoreInfo, getName, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.print.attribute.standard.PrinterMoreInfo",
		"javax.print.attribute.URISyntax",
		"javax.print.attribute.PrintServiceAttribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrinterMoreInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PrinterMoreInfo));
	});
	return class$;
}

$Class* PrinterMoreInfo::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax