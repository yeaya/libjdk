#include <javax/print/attribute/standard/JobKOctetsSupported.h>
#include <javax/print/attribute/SetOfIntegerSyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SetOfIntegerSyntax = ::javax::print::attribute::SetOfIntegerSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

int32_t JobKOctetsSupported::hashCode() {
	return this->$SetOfIntegerSyntax::hashCode();
}

$String* JobKOctetsSupported::toString() {
	return this->$SetOfIntegerSyntax::toString();
}

$Object* JobKOctetsSupported::clone() {
	return this->$SetOfIntegerSyntax::clone();
}

void JobKOctetsSupported::finalize() {
	this->$SetOfIntegerSyntax::finalize();
}

void JobKOctetsSupported::init$(int32_t lowerBound, int32_t upperBound) {
	$SetOfIntegerSyntax::init$(lowerBound, upperBound);
	if (lowerBound > upperBound) {
		$throwNew($IllegalArgumentException, "Null range specified"_s);
	} else if (lowerBound < 0) {
		$throwNew($IllegalArgumentException, "Job K octets value < 0 specified"_s);
	}
}

bool JobKOctetsSupported::equals(Object$* object) {
	return ($SetOfIntegerSyntax::equals(object) && $instanceOf(JobKOctetsSupported, object));
}

$Class* JobKOctetsSupported::getCategory() {
	return JobKOctetsSupported::class$;
}

$String* JobKOctetsSupported::getName() {
	return "job-k-octets-supported"_s;
}

JobKOctetsSupported::JobKOctetsSupported() {
}

$Class* JobKOctetsSupported::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobKOctetsSupported, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(JobKOctetsSupported, init$, void, int32_t, int32_t)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JobKOctetsSupported, equals, bool, Object$*)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(JobKOctetsSupported, getCategory, $Class*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(JobKOctetsSupported, getName, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.print.attribute.standard.JobKOctetsSupported",
		"javax.print.attribute.SetOfIntegerSyntax",
		"javax.print.attribute.SupportedValuesAttribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JobKOctetsSupported, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JobKOctetsSupported));
	});
	return class$;
}

$Class* JobKOctetsSupported::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax