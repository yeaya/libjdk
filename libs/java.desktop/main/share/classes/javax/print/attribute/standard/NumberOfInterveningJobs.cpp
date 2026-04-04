#include <javax/print/attribute/standard/NumberOfInterveningJobs.h>
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

int32_t NumberOfInterveningJobs::hashCode() {
	 return this->$IntegerSyntax::hashCode();
}

$String* NumberOfInterveningJobs::toString() {
	 return this->$IntegerSyntax::toString();
}

$Object* NumberOfInterveningJobs::clone() {
	 return this->$IntegerSyntax::clone();
}

void NumberOfInterveningJobs::finalize() {
	this->$IntegerSyntax::finalize();
}

void NumberOfInterveningJobs::init$(int32_t value) {
	$IntegerSyntax::init$(value, 0, $Integer::MAX_VALUE);
}

bool NumberOfInterveningJobs::equals(Object$* object) {
	return ($IntegerSyntax::equals(object) && $instanceOf(NumberOfInterveningJobs, object));
}

$Class* NumberOfInterveningJobs::getCategory() {
	return NumberOfInterveningJobs::class$;
}

$String* NumberOfInterveningJobs::getName() {
	return "number-of-intervening-jobs"_s;
}

NumberOfInterveningJobs::NumberOfInterveningJobs() {
}

$Class* NumberOfInterveningJobs::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumberOfInterveningJobs, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(NumberOfInterveningJobs, init$, void, int32_t)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(NumberOfInterveningJobs, equals, bool, Object$*)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(NumberOfInterveningJobs, getCategory, $Class*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(NumberOfInterveningJobs, getName, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.print.attribute.standard.NumberOfInterveningJobs",
		"javax.print.attribute.IntegerSyntax",
		"javax.print.attribute.PrintJobAttribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NumberOfInterveningJobs, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(NumberOfInterveningJobs));
	});
	return class$;
}

$Class* NumberOfInterveningJobs::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax