#include <javax/print/attribute/standard/DateTimeAtCompleted.h>

#include <java/util/Date.h>
#include <javax/print/attribute/DateTimeSyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;
using $DateTimeSyntax = ::javax::print::attribute::DateTimeSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _DateTimeAtCompleted_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DateTimeAtCompleted, serialVersionUID)},
	{}
};

$MethodInfo _DateTimeAtCompleted_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/Date;)V", nullptr, $PUBLIC, $method(DateTimeAtCompleted, init$, void, $Date*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DateTimeAtCompleted, equals, bool, Object$*)},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(DateTimeAtCompleted, getCategory, $Class*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(DateTimeAtCompleted, getName, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DateTimeAtCompleted_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.DateTimeAtCompleted",
	"javax.print.attribute.DateTimeSyntax",
	"javax.print.attribute.PrintJobAttribute",
	_DateTimeAtCompleted_FieldInfo_,
	_DateTimeAtCompleted_MethodInfo_
};

$Object* allocate$DateTimeAtCompleted($Class* clazz) {
	return $of($alloc(DateTimeAtCompleted));
}

int32_t DateTimeAtCompleted::hashCode() {
	 return this->$DateTimeSyntax::hashCode();
}

$String* DateTimeAtCompleted::toString() {
	 return this->$DateTimeSyntax::toString();
}

$Object* DateTimeAtCompleted::clone() {
	 return this->$DateTimeSyntax::clone();
}

void DateTimeAtCompleted::finalize() {
	this->$DateTimeSyntax::finalize();
}

void DateTimeAtCompleted::init$($Date* dateTime) {
	$DateTimeSyntax::init$(dateTime);
}

bool DateTimeAtCompleted::equals(Object$* object) {
	return ($DateTimeSyntax::equals(object) && $instanceOf(DateTimeAtCompleted, object));
}

$Class* DateTimeAtCompleted::getCategory() {
	return DateTimeAtCompleted::class$;
}

$String* DateTimeAtCompleted::getName() {
	return "date-time-at-completed"_s;
}

DateTimeAtCompleted::DateTimeAtCompleted() {
}

$Class* DateTimeAtCompleted::load$($String* name, bool initialize) {
	$loadClass(DateTimeAtCompleted, name, initialize, &_DateTimeAtCompleted_ClassInfo_, allocate$DateTimeAtCompleted);
	return class$;
}

$Class* DateTimeAtCompleted::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax