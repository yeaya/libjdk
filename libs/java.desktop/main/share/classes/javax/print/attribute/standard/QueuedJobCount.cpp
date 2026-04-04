#include <javax/print/attribute/standard/QueuedJobCount.h>
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

int32_t QueuedJobCount::hashCode() {
	 return this->$IntegerSyntax::hashCode();
}

$String* QueuedJobCount::toString() {
	 return this->$IntegerSyntax::toString();
}

$Object* QueuedJobCount::clone() {
	 return this->$IntegerSyntax::clone();
}

void QueuedJobCount::finalize() {
	this->$IntegerSyntax::finalize();
}

void QueuedJobCount::init$(int32_t value) {
	$IntegerSyntax::init$(value, 0, $Integer::MAX_VALUE);
}

bool QueuedJobCount::equals(Object$* object) {
	return ($IntegerSyntax::equals(object) && $instanceOf(QueuedJobCount, object));
}

$Class* QueuedJobCount::getCategory() {
	return QueuedJobCount::class$;
}

$String* QueuedJobCount::getName() {
	return "queued-job-count"_s;
}

QueuedJobCount::QueuedJobCount() {
}

$Class* QueuedJobCount::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QueuedJobCount, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(QueuedJobCount, init$, void, int32_t)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(QueuedJobCount, equals, bool, Object$*)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(QueuedJobCount, getCategory, $Class*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(QueuedJobCount, getName, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.print.attribute.standard.QueuedJobCount",
		"javax.print.attribute.IntegerSyntax",
		"javax.print.attribute.PrintServiceAttribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(QueuedJobCount, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(QueuedJobCount));
	});
	return class$;
}

$Class* QueuedJobCount::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax