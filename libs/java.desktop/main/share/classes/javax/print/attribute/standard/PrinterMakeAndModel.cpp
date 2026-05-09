#include <javax/print/attribute/standard/PrinterMakeAndModel.h>
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

int32_t PrinterMakeAndModel::hashCode() {
	return this->$TextSyntax::hashCode();
}

$String* PrinterMakeAndModel::toString() {
	return this->$TextSyntax::toString();
}

$Object* PrinterMakeAndModel::clone() {
	return this->$TextSyntax::clone();
}

void PrinterMakeAndModel::finalize() {
	this->$TextSyntax::finalize();
}

void PrinterMakeAndModel::init$($String* makeAndModel, $Locale* locale) {
	$TextSyntax::init$(makeAndModel, locale);
}

bool PrinterMakeAndModel::equals(Object$* object) {
	return ($TextSyntax::equals(object) && $instanceOf(PrinterMakeAndModel, object));
}

$Class* PrinterMakeAndModel::getCategory() {
	return PrinterMakeAndModel::class$;
}

$String* PrinterMakeAndModel::getName() {
	return "printer-make-and-model"_s;
}

PrinterMakeAndModel::PrinterMakeAndModel() {
}

$Class* PrinterMakeAndModel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterMakeAndModel, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(PrinterMakeAndModel, init$, void, $String*, $Locale*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PrinterMakeAndModel, equals, bool, Object$*)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(PrinterMakeAndModel, getCategory, $Class*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(PrinterMakeAndModel, getName, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.print.attribute.standard.PrinterMakeAndModel",
		"javax.print.attribute.TextSyntax",
		"javax.print.attribute.PrintServiceAttribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrinterMakeAndModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PrinterMakeAndModel));
	});
	return class$;
}

$Class* PrinterMakeAndModel::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax