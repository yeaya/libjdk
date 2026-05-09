#include <javax/print/attribute/standard/OutputDeviceAssigned.h>
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

int32_t OutputDeviceAssigned::hashCode() {
	return this->$TextSyntax::hashCode();
}

$String* OutputDeviceAssigned::toString() {
	return this->$TextSyntax::toString();
}

$Object* OutputDeviceAssigned::clone() {
	return this->$TextSyntax::clone();
}

void OutputDeviceAssigned::finalize() {
	this->$TextSyntax::finalize();
}

void OutputDeviceAssigned::init$($String* deviceName, $Locale* locale) {
	$TextSyntax::init$(deviceName, locale);
}

bool OutputDeviceAssigned::equals(Object$* object) {
	return ($TextSyntax::equals(object) && $instanceOf(OutputDeviceAssigned, object));
}

$Class* OutputDeviceAssigned::getCategory() {
	return OutputDeviceAssigned::class$;
}

$String* OutputDeviceAssigned::getName() {
	return "output-device-assigned"_s;
}

OutputDeviceAssigned::OutputDeviceAssigned() {
}

$Class* OutputDeviceAssigned::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OutputDeviceAssigned, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(OutputDeviceAssigned, init$, void, $String*, $Locale*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(OutputDeviceAssigned, equals, bool, Object$*)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(OutputDeviceAssigned, getCategory, $Class*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(OutputDeviceAssigned, getName, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.print.attribute.standard.OutputDeviceAssigned",
		"javax.print.attribute.TextSyntax",
		"javax.print.attribute.PrintJobAttribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OutputDeviceAssigned, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(OutputDeviceAssigned));
	});
	return class$;
}

$Class* OutputDeviceAssigned::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax