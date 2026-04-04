#include <javax/print/attribute/standard/NumberOfDocuments.h>
#include <javax/print/attribute/IntegerSyntax.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntegerSyntax = ::javax::print::attribute::IntegerSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

int32_t NumberOfDocuments::hashCode() {
	 return this->$IntegerSyntax::hashCode();
}

$String* NumberOfDocuments::toString() {
	 return this->$IntegerSyntax::toString();
}

$Object* NumberOfDocuments::clone() {
	 return this->$IntegerSyntax::clone();
}

void NumberOfDocuments::finalize() {
	this->$IntegerSyntax::finalize();
}

void NumberOfDocuments::init$(int32_t value) {
	$IntegerSyntax::init$(value, 0, $Integer::MAX_VALUE);
}

bool NumberOfDocuments::equals(Object$* object) {
	return ($IntegerSyntax::equals(object) && $instanceOf(NumberOfDocuments, object));
}

$Class* NumberOfDocuments::getCategory() {
	return NumberOfDocuments::class$;
}

$String* NumberOfDocuments::getName() {
	return "number-of-documents"_s;
}

NumberOfDocuments::NumberOfDocuments() {
}

$Class* NumberOfDocuments::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumberOfDocuments, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(NumberOfDocuments, init$, void, int32_t)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(NumberOfDocuments, equals, bool, Object$*)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(NumberOfDocuments, getCategory, $Class*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(NumberOfDocuments, getName, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.print.attribute.standard.NumberOfDocuments",
		"javax.print.attribute.IntegerSyntax",
		"javax.print.attribute.PrintJobAttribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NumberOfDocuments, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(NumberOfDocuments));
	});
	return class$;
}

$Class* NumberOfDocuments::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax