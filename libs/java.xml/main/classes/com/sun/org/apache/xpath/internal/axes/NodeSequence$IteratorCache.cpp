#include <com/sun/org/apache/xpath/internal/axes/NodeSequence$IteratorCache.h>

#include <com/sun/org/apache/xml/internal/utils/NodeVector.h>
#include <com/sun/org/apache/xpath/internal/axes/NodeSequence.h>
#include <jcpp.h>

using $NodeVector = ::com::sun::org::apache::xml::internal::utils::NodeVector;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _NodeSequence$IteratorCache_FieldInfo_[] = {
	{"m_vec2", "Lcom/sun/org/apache/xml/internal/utils/NodeVector;", nullptr, $PRIVATE, $field(NodeSequence$IteratorCache, m_vec2)},
	{"m_isComplete2", "Z", nullptr, $PRIVATE, $field(NodeSequence$IteratorCache, m_isComplete2)},
	{"m_useCount2", "I", nullptr, $PRIVATE, $field(NodeSequence$IteratorCache, m_useCount2)},
	{}
};

$MethodInfo _NodeSequence$IteratorCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(NodeSequence$IteratorCache, init$, void)},
	{"getVector", "()Lcom/sun/org/apache/xml/internal/utils/NodeVector;", nullptr, $PRIVATE, $method(NodeSequence$IteratorCache, getVector, $NodeVector*)},
	{"increaseUseCount", "()V", nullptr, $PRIVATE, $method(NodeSequence$IteratorCache, increaseUseCount, void)},
	{"isComplete", "()Z", nullptr, $PRIVATE, $method(NodeSequence$IteratorCache, isComplete, bool)},
	{"setCacheComplete", "(Z)V", nullptr, $PRIVATE, $method(NodeSequence$IteratorCache, setCacheComplete, void, bool)},
	{"setVector", "(Lcom/sun/org/apache/xml/internal/utils/NodeVector;)V", nullptr, $PRIVATE, $method(NodeSequence$IteratorCache, setVector, void, $NodeVector*)},
	{"useCount", "()I", nullptr, $PRIVATE, $method(NodeSequence$IteratorCache, useCount, int32_t)},
	{}
};

$InnerClassInfo _NodeSequence$IteratorCache_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.axes.NodeSequence$IteratorCache", "com.sun.org.apache.xpath.internal.axes.NodeSequence", "IteratorCache", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NodeSequence$IteratorCache_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.NodeSequence$IteratorCache",
	"java.lang.Object",
	nullptr,
	_NodeSequence$IteratorCache_FieldInfo_,
	_NodeSequence$IteratorCache_MethodInfo_,
	nullptr,
	nullptr,
	_NodeSequence$IteratorCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.axes.NodeSequence"
};

$Object* allocate$NodeSequence$IteratorCache($Class* clazz) {
	return $of($alloc(NodeSequence$IteratorCache));
}

void NodeSequence$IteratorCache::init$() {
	$set(this, m_vec2, nullptr);
	this->m_isComplete2 = false;
	this->m_useCount2 = 1;
	return;
}

int32_t NodeSequence$IteratorCache::useCount() {
	return this->m_useCount2;
}

void NodeSequence$IteratorCache::increaseUseCount() {
	if (this->m_vec2 != nullptr) {
		++this->m_useCount2;
	}
}

void NodeSequence$IteratorCache::setVector($NodeVector* nv) {
	$set(this, m_vec2, nv);
	this->m_useCount2 = 1;
}

$NodeVector* NodeSequence$IteratorCache::getVector() {
	return this->m_vec2;
}

void NodeSequence$IteratorCache::setCacheComplete(bool b) {
	this->m_isComplete2 = b;
}

bool NodeSequence$IteratorCache::isComplete() {
	return this->m_isComplete2;
}

NodeSequence$IteratorCache::NodeSequence$IteratorCache() {
}

$Class* NodeSequence$IteratorCache::load$($String* name, bool initialize) {
	$loadClass(NodeSequence$IteratorCache, name, initialize, &_NodeSequence$IteratorCache_ClassInfo_, allocate$NodeSequence$IteratorCache);
	return class$;
}

$Class* NodeSequence$IteratorCache::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com