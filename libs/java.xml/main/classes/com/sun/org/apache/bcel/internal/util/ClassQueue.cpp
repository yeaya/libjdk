#include <com/sun/org/apache/bcel/internal/util/ClassQueue.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <java/util/AbstractCollection.h>
#include <java/util/LinkedList.h>
#include <jcpp.h>

using $JavaClass = ::com::sun::org::apache::bcel::internal::classfile::JavaClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkedList = ::java::util::LinkedList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

void ClassQueue::init$() {
	$set(this, vec, $new($LinkedList));
}

void ClassQueue::enqueue($JavaClass* clazz) {
	this->vec->addLast(clazz);
}

$JavaClass* ClassQueue::dequeue() {
	return $cast($JavaClass, this->vec->removeFirst());
}

bool ClassQueue::empty() {
	return this->vec->isEmpty();
}

$String* ClassQueue::toString() {
	return this->vec->toString();
}

ClassQueue::ClassQueue() {
}

$Class* ClassQueue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"vec", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;>;", $PRIVATE | $FINAL, $field(ClassQueue, vec)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClassQueue, init$, void)},
		{"dequeue", "()Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC, $virtualMethod(ClassQueue, dequeue, $JavaClass*)},
		{"empty", "()Z", nullptr, $PUBLIC, $virtualMethod(ClassQueue, empty, bool)},
		{"enqueue", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC, $virtualMethod(ClassQueue, enqueue, void, $JavaClass*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ClassQueue, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.util.ClassQueue",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClassQueue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassQueue);
	});
	return class$;
}

$Class* ClassQueue::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com