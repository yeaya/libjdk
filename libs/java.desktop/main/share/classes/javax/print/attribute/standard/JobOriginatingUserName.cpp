#include <javax/print/attribute/standard/JobOriginatingUserName.h>
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

int32_t JobOriginatingUserName::hashCode() {
	return this->$TextSyntax::hashCode();
}

$String* JobOriginatingUserName::toString() {
	return this->$TextSyntax::toString();
}

$Object* JobOriginatingUserName::clone() {
	return this->$TextSyntax::clone();
}

void JobOriginatingUserName::finalize() {
	this->$TextSyntax::finalize();
}

void JobOriginatingUserName::init$($String* userName, $Locale* locale) {
	$TextSyntax::init$(userName, locale);
}

bool JobOriginatingUserName::equals(Object$* object) {
	return ($TextSyntax::equals(object) && $instanceOf(JobOriginatingUserName, object));
}

$Class* JobOriginatingUserName::getCategory() {
	return JobOriginatingUserName::class$;
}

$String* JobOriginatingUserName::getName() {
	return "job-originating-user-name"_s;
}

JobOriginatingUserName::JobOriginatingUserName() {
}

$Class* JobOriginatingUserName::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JobOriginatingUserName, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(JobOriginatingUserName, init$, void, $String*, $Locale*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JobOriginatingUserName, equals, bool, Object$*)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(JobOriginatingUserName, getCategory, $Class*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(JobOriginatingUserName, getName, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.print.attribute.standard.JobOriginatingUserName",
		"javax.print.attribute.TextSyntax",
		"javax.print.attribute.PrintJobAttribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JobOriginatingUserName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JobOriginatingUserName));
	});
	return class$;
}

$Class* JobOriginatingUserName::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax