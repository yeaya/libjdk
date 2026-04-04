#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

void RowFilter$Entry::init$() {
}

$String* RowFilter$Entry::getStringValue(int32_t index) {
	$var($Object, value, getValue(index));
	return (value == nullptr) ? ""_s : value->toString();
}

RowFilter$Entry::RowFilter$Entry() {
}

$Class* RowFilter$Entry::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RowFilter$Entry, init$, void)},
		{"getIdentifier", "()Ljava/lang/Object;", "()TI;", $PUBLIC | $ABSTRACT, $virtualMethod(RowFilter$Entry, getIdentifier, $Object*)},
		{"getModel", "()Ljava/lang/Object;", "()TM;", $PUBLIC | $ABSTRACT, $virtualMethod(RowFilter$Entry, getModel, $Object*)},
		{"getStringValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RowFilter$Entry, getStringValue, $String*, int32_t)},
		{"getValue", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowFilter$Entry, getValue, $Object*, int32_t)},
		{"getValueCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowFilter$Entry, getValueCount, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.RowFilter$Entry", "javax.swing.RowFilter", "Entry", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.RowFilter$Entry",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<M:Ljava/lang/Object;I:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.RowFilter"
	};
	$loadClass(RowFilter$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowFilter$Entry);
	});
	return class$;
}

$Class* RowFilter$Entry::class$ = nullptr;

	} // swing
} // javax