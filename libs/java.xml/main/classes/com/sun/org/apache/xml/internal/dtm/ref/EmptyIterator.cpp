#include <com/sun/org/apache/xml/internal/dtm/ref/EmptyIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <jcpp.h>

#undef END
#undef INSTANCE

using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _EmptyIterator_FieldInfo_[] = {
	{"INSTANCE", "Lcom/sun/org/apache/xml/internal/dtm/ref/EmptyIterator;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EmptyIterator, INSTANCE)},
	{}
};

$MethodInfo _EmptyIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(EmptyIterator, init$, void)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $FINAL, $virtualMethod(EmptyIterator, cloneIterator, $DTMAxisIterator*)},
	{"getInstance", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $STATIC, $staticMethod(EmptyIterator, getInstance, $DTMAxisIterator*)},
	{"getLast", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(EmptyIterator, getLast, int32_t)},
	{"getNodeByPosition", "(I)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(EmptyIterator, getNodeByPosition, int32_t, int32_t)},
	{"getPosition", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(EmptyIterator, getPosition, int32_t)},
	{"getStartNode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(EmptyIterator, getStartNode, int32_t)},
	{"gotoMark", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(EmptyIterator, gotoMark, void)},
	{"isReverse", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(EmptyIterator, isReverse, bool)},
	{"next", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(EmptyIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $FINAL, $virtualMethod(EmptyIterator, reset, $DTMAxisIterator*)},
	{"setMark", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(EmptyIterator, setMark, void)},
	{"setRestartable", "(Z)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(EmptyIterator, setRestartable, void, bool)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $FINAL, $virtualMethod(EmptyIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$ClassInfo _EmptyIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.EmptyIterator",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.dtm.DTMAxisIterator",
	_EmptyIterator_FieldInfo_,
	_EmptyIterator_MethodInfo_
};

$Object* allocate$EmptyIterator($Class* clazz) {
	return $of($alloc(EmptyIterator));
}

EmptyIterator* EmptyIterator::INSTANCE = nullptr;

$DTMAxisIterator* EmptyIterator::getInstance() {
	$init(EmptyIterator);
	return EmptyIterator::INSTANCE;
}

void EmptyIterator::init$() {
}

int32_t EmptyIterator::next() {
	return $DTMAxisIterator::END;
}

$DTMAxisIterator* EmptyIterator::reset() {
	return this;
}

int32_t EmptyIterator::getLast() {
	return 0;
}

int32_t EmptyIterator::getPosition() {
	return 1;
}

void EmptyIterator::setMark() {
}

void EmptyIterator::gotoMark() {
}

$DTMAxisIterator* EmptyIterator::setStartNode(int32_t node) {
	return this;
}

int32_t EmptyIterator::getStartNode() {
	return $DTMAxisIterator::END;
}

bool EmptyIterator::isReverse() {
	return false;
}

$DTMAxisIterator* EmptyIterator::cloneIterator() {
	return this;
}

void EmptyIterator::setRestartable(bool isRestartable) {
}

int32_t EmptyIterator::getNodeByPosition(int32_t position) {
	return $DTMAxisIterator::END;
}

void clinit$EmptyIterator($Class* class$) {
	$assignStatic(EmptyIterator::INSTANCE, $new(EmptyIterator));
}

EmptyIterator::EmptyIterator() {
}

$Class* EmptyIterator::load$($String* name, bool initialize) {
	$loadClass(EmptyIterator, name, initialize, &_EmptyIterator_ClassInfo_, clinit$EmptyIterator, allocate$EmptyIterator);
	return class$;
}

$Class* EmptyIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com