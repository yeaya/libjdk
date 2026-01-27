#include <com/sun/org/apache/xerces/internal/util/SecurityManager.h>

#include <jdk/xml/internal/JdkConstants.h>
#include <jcpp.h>

#undef DEFAULT_ELEMENT_ATTRIBUTE_LIMIT
#undef DEFAULT_ENTITY_EXPANSION_LIMIT
#undef DEFAULT_MAX_OCCUR_NODE_LIMIT
#undef ELEMENT_ATTRIBUTE_LIMIT
#undef ENTITY_EXPANSION_LIMIT
#undef MAX_OCCUR_LIMIT

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _SecurityManager_FieldInfo_[] = {
	{"DEFAULT_ENTITY_EXPANSION_LIMIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SecurityManager, DEFAULT_ENTITY_EXPANSION_LIMIT)},
	{"DEFAULT_MAX_OCCUR_NODE_LIMIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SecurityManager, DEFAULT_MAX_OCCUR_NODE_LIMIT)},
	{"DEFAULT_ELEMENT_ATTRIBUTE_LIMIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SecurityManager, DEFAULT_ELEMENT_ATTRIBUTE_LIMIT)},
	{"entityExpansionLimit", "I", nullptr, $PRIVATE, $field(SecurityManager, entityExpansionLimit)},
	{"maxOccurLimit", "I", nullptr, $PRIVATE, $field(SecurityManager, maxOccurLimit)},
	{"fElementAttributeLimit", "I", nullptr, $PRIVATE, $field(SecurityManager, fElementAttributeLimit)},
	{}
};

$MethodInfo _SecurityManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SecurityManager, init$, void)},
	{"getElementAttrLimit", "()I", nullptr, $PUBLIC, $method(SecurityManager, getElementAttrLimit, int32_t)},
	{"getEntityExpansionLimit", "()I", nullptr, $PUBLIC, $method(SecurityManager, getEntityExpansionLimit, int32_t)},
	{"getMaxOccurNodeLimit", "()I", nullptr, $PUBLIC, $method(SecurityManager, getMaxOccurNodeLimit, int32_t)},
	{"readSystemProperties", "()V", nullptr, $PRIVATE, $method(SecurityManager, readSystemProperties, void)},
	{"setElementAttrLimit", "(I)V", nullptr, $PUBLIC, $method(SecurityManager, setElementAttrLimit, void, int32_t)},
	{"setEntityExpansionLimit", "(I)V", nullptr, $PUBLIC, $method(SecurityManager, setEntityExpansionLimit, void, int32_t)},
	{"setMaxOccurNodeLimit", "(I)V", nullptr, $PUBLIC, $method(SecurityManager, setMaxOccurNodeLimit, void, int32_t)},
	{}
};

$ClassInfo _SecurityManager_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.SecurityManager",
	"java.lang.Object",
	nullptr,
	_SecurityManager_FieldInfo_,
	_SecurityManager_MethodInfo_
};

$Object* allocate$SecurityManager($Class* clazz) {
	return $of($alloc(SecurityManager));
}

void SecurityManager::init$() {
	this->entityExpansionLimit = SecurityManager::DEFAULT_ENTITY_EXPANSION_LIMIT;
	this->maxOccurLimit = SecurityManager::DEFAULT_MAX_OCCUR_NODE_LIMIT;
	this->fElementAttributeLimit = SecurityManager::DEFAULT_ELEMENT_ATTRIBUTE_LIMIT;
	readSystemProperties();
}

void SecurityManager::setEntityExpansionLimit(int32_t limit) {
	this->entityExpansionLimit = limit;
}

int32_t SecurityManager::getEntityExpansionLimit() {
	return this->entityExpansionLimit;
}

void SecurityManager::setMaxOccurNodeLimit(int32_t limit) {
	this->maxOccurLimit = limit;
}

int32_t SecurityManager::getMaxOccurNodeLimit() {
	return this->maxOccurLimit;
}

int32_t SecurityManager::getElementAttrLimit() {
	return this->fElementAttributeLimit;
}

void SecurityManager::setElementAttrLimit(int32_t limit) {
	this->fElementAttributeLimit = limit;
}

void SecurityManager::readSystemProperties() {
	$useLocalCurrentObjectStackCache();
	try {
		$init($JdkConstants);
		$var($String, value, $System::getProperty($JdkConstants::ENTITY_EXPANSION_LIMIT));
		if (value != nullptr && !value->equals(""_s)) {
			this->entityExpansionLimit = $Integer::parseInt(value);
			if (this->entityExpansionLimit < 0) {
				this->entityExpansionLimit = SecurityManager::DEFAULT_ENTITY_EXPANSION_LIMIT;
			}
		} else {
			this->entityExpansionLimit = SecurityManager::DEFAULT_ENTITY_EXPANSION_LIMIT;
		}
	} catch ($Exception& ex) {
	}
	try {
		$init($JdkConstants);
		$var($String, value, $System::getProperty($JdkConstants::MAX_OCCUR_LIMIT));
		if (value != nullptr && !value->equals(""_s)) {
			this->maxOccurLimit = $Integer::parseInt(value);
			if (this->maxOccurLimit < 0) {
				this->maxOccurLimit = SecurityManager::DEFAULT_MAX_OCCUR_NODE_LIMIT;
			}
		} else {
			this->maxOccurLimit = SecurityManager::DEFAULT_MAX_OCCUR_NODE_LIMIT;
		}
	} catch ($Exception& ex) {
	}
	try {
		$init($JdkConstants);
		$var($String, value, $System::getProperty($JdkConstants::ELEMENT_ATTRIBUTE_LIMIT));
		if (value != nullptr && !value->equals(""_s)) {
			this->fElementAttributeLimit = $Integer::parseInt(value);
			if (this->fElementAttributeLimit < 0) {
				this->fElementAttributeLimit = SecurityManager::DEFAULT_ELEMENT_ATTRIBUTE_LIMIT;
			}
		} else {
			this->fElementAttributeLimit = SecurityManager::DEFAULT_ELEMENT_ATTRIBUTE_LIMIT;
		}
	} catch ($Exception& ex) {
	}
}

SecurityManager::SecurityManager() {
}

$Class* SecurityManager::load$($String* name, bool initialize) {
	$loadClass(SecurityManager, name, initialize, &_SecurityManager_ClassInfo_, allocate$SecurityManager);
	return class$;
}

$Class* SecurityManager::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com