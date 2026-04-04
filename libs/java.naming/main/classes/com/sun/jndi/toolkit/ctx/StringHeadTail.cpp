#include <com/sun/jndi/toolkit/ctx/StringHeadTail.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

void StringHeadTail::init$($String* head, $String* tail) {
	StringHeadTail::init$(head, tail, 0);
}

void StringHeadTail::init$($String* head, $String* tail, int32_t status) {
	this->status = status;
	$set(this, head, head);
	$set(this, tail, tail);
}

void StringHeadTail::setStatus(int32_t status) {
	this->status = status;
}

$String* StringHeadTail::getHead() {
	return this->head;
}

$String* StringHeadTail::getTail() {
	return this->tail;
}

int32_t StringHeadTail::getStatus() {
	return this->status;
}

StringHeadTail::StringHeadTail() {
}

$Class* StringHeadTail::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"status", "I", nullptr, $PRIVATE, $field(StringHeadTail, status)},
		{"head", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringHeadTail, head)},
		{"tail", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringHeadTail, tail)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StringHeadTail, init$, void, $String*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(StringHeadTail, init$, void, $String*, $String*, int32_t)},
		{"getHead", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StringHeadTail, getHead, $String*)},
		{"getStatus", "()I", nullptr, $PUBLIC, $virtualMethod(StringHeadTail, getStatus, int32_t)},
		{"getTail", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StringHeadTail, getTail, $String*)},
		{"setStatus", "(I)V", nullptr, $PUBLIC, $virtualMethod(StringHeadTail, setStatus, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.jndi.toolkit.ctx.StringHeadTail",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StringHeadTail, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringHeadTail);
	});
	return class$;
}

$Class* StringHeadTail::class$ = nullptr;

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com