#include <com/sun/org/apache/xerces/internal/impl/xs/models/CMNodeFactory.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMNode.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMBinOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMLeaf.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMRepeatingLeaf.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMUniOp.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <jcpp.h>

#undef DEBUG
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef MAX_OCCUR_NODE_LIMIT
#undef MULTIPLICITY
#undef SCHEMA_DOMAIN
#undef SECURITY_MANAGER
#undef SECURITY_MANAGER_PROPERTY
#undef SEVERITY_FATAL_ERROR
#undef XERCES_PROPERTY_PREFIX

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $CMNode = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode;
using $XSMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::xs::XSMessageFormatter;
using $XSCMBinOp = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMBinOp;
using $XSCMLeaf = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMLeaf;
using $XSCMRepeatingLeaf = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMRepeatingLeaf;
using $XSCMUniOp = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMUniOp;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityManager$Limit = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace models {

$FieldInfo _CMNodeFactory_FieldInfo_[] = {
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CMNodeFactory, ERROR_REPORTER)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CMNodeFactory, SECURITY_MANAGER)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CMNodeFactory, DEBUG)},
	{"MULTIPLICITY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CMNodeFactory, MULTIPLICITY)},
	{"nodeCount", "I", nullptr, $PRIVATE, $field(CMNodeFactory, nodeCount)},
	{"maxNodeLimit", "I", nullptr, $PRIVATE, $field(CMNodeFactory, maxNodeLimit)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PRIVATE, $field(CMNodeFactory, fErrorReporter)},
	{"fSecurityManager", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager;", nullptr, $PRIVATE, $field(CMNodeFactory, fSecurityManager)},
	{}
};

$MethodInfo _CMNodeFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CMNodeFactory, init$, void)},
	{"getCMBinOpNode", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;)Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PUBLIC, $virtualMethod(CMNodeFactory, getCMBinOpNode, $CMNode*, int32_t, $CMNode*, $CMNode*)},
	{"getCMLeafNode", "(ILjava/lang/Object;II)Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PUBLIC, $virtualMethod(CMNodeFactory, getCMLeafNode, $CMNode*, int32_t, Object$*, int32_t, int32_t)},
	{"getCMRepeatingLeafNode", "(ILjava/lang/Object;IIII)Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PUBLIC, $virtualMethod(CMNodeFactory, getCMRepeatingLeafNode, $CMNode*, int32_t, Object$*, int32_t, int32_t, int32_t, int32_t)},
	{"getCMUniOpNode", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;)Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PUBLIC, $virtualMethod(CMNodeFactory, getCMUniOpNode, $CMNode*, int32_t, $CMNode*)},
	{"nodeCountCheck", "()V", nullptr, $PUBLIC, $virtualMethod(CMNodeFactory, nodeCountCheck, void)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(CMNodeFactory, reset, void, $XMLComponentManager*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(CMNodeFactory, reset, void)},
	{"resetNodeCount", "()V", nullptr, $PUBLIC, $virtualMethod(CMNodeFactory, resetNodeCount, void)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CMNodeFactory, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{}
};

$ClassInfo _CMNodeFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.models.CMNodeFactory",
	"java.lang.Object",
	nullptr,
	_CMNodeFactory_FieldInfo_,
	_CMNodeFactory_MethodInfo_
};

$Object* allocate$CMNodeFactory($Class* clazz) {
	return $of($alloc(CMNodeFactory));
}

$String* CMNodeFactory::ERROR_REPORTER = nullptr;
$String* CMNodeFactory::SECURITY_MANAGER = nullptr;

void CMNodeFactory::init$() {
	this->nodeCount = 0;
	$set(this, fSecurityManager, nullptr);
}

void CMNodeFactory::reset($XMLComponentManager* componentManager) {
	$set(this, fErrorReporter, $cast($XMLErrorReporter, $nc(componentManager)->getProperty(CMNodeFactory::ERROR_REPORTER)));
	try {
		$set(this, fSecurityManager, $cast($XMLSecurityManager, componentManager->getProperty(CMNodeFactory::SECURITY_MANAGER)));
		reset();
	} catch ($XMLConfigurationException& e) {
		$set(this, fSecurityManager, nullptr);
	}
}

void CMNodeFactory::reset() {
	if (this->fSecurityManager != nullptr) {
		$init($XMLSecurityManager$Limit);
		this->maxNodeLimit = $nc(this->fSecurityManager)->getLimit($XMLSecurityManager$Limit::MAX_OCCUR_NODE_LIMIT) * CMNodeFactory::MULTIPLICITY;
	}
}

$CMNode* CMNodeFactory::getCMLeafNode(int32_t type, Object$* leaf, int32_t id, int32_t position) {
	return $new($XSCMLeaf, type, leaf, id, position);
}

$CMNode* CMNodeFactory::getCMRepeatingLeafNode(int32_t type, Object$* leaf, int32_t minOccurs, int32_t maxOccurs, int32_t id, int32_t position) {
	nodeCountCheck();
	return $new($XSCMRepeatingLeaf, type, leaf, minOccurs, maxOccurs, id, position);
}

$CMNode* CMNodeFactory::getCMUniOpNode(int32_t type, $CMNode* childNode) {
	nodeCountCheck();
	return $new($XSCMUniOp, type, childNode);
}

$CMNode* CMNodeFactory::getCMBinOpNode(int32_t type, $CMNode* leftNode, $CMNode* rightNode) {
	return $new($XSCMBinOp, type, leftNode, rightNode);
}

void CMNodeFactory::nodeCountCheck() {
	$useLocalCurrentObjectStackCache();
	if (this->fSecurityManager != nullptr && !$nc(this->fSecurityManager)->isNoLimit(this->maxNodeLimit) && this->nodeCount++ > this->maxNodeLimit) {
		$init($XSMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XSMessageFormatter::SCHEMA_DOMAIN, "MaxOccurLimit"_s, $$new($ObjectArray, {$($of($Integer::valueOf(this->maxNodeLimit)))}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
		this->nodeCount = 0;
	}
}

void CMNodeFactory::resetNodeCount() {
	this->nodeCount = 0;
}

void CMNodeFactory::setProperty($String* propertyId, Object$* value) {
	$init($Constants);
	if ($nc(propertyId)->startsWith($Constants::XERCES_PROPERTY_PREFIX)) {
		int32_t var$0 = propertyId->length();
		int32_t suffixLength = var$0 - $nc($Constants::XERCES_PROPERTY_PREFIX)->length();
		bool var$1 = suffixLength == $nc($Constants::SECURITY_MANAGER_PROPERTY)->length();
		if (var$1 && propertyId->endsWith($Constants::SECURITY_MANAGER_PROPERTY)) {
			$set(this, fSecurityManager, $cast($XMLSecurityManager, value));
			$init($XMLSecurityManager$Limit);
			this->maxNodeLimit = (this->fSecurityManager != nullptr) ? $nc(this->fSecurityManager)->getLimit($XMLSecurityManager$Limit::MAX_OCCUR_NODE_LIMIT) * CMNodeFactory::MULTIPLICITY : 0;
			return;
		}
		bool var$2 = suffixLength == $nc($Constants::ERROR_REPORTER_PROPERTY)->length();
		if (var$2 && propertyId->endsWith($Constants::ERROR_REPORTER_PROPERTY)) {
			$set(this, fErrorReporter, $cast($XMLErrorReporter, value));
			return;
		}
	}
}

CMNodeFactory::CMNodeFactory() {
}

void clinit$CMNodeFactory($Class* class$) {
	$init($Constants);
	$assignStatic(CMNodeFactory::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(CMNodeFactory::SECURITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SECURITY_MANAGER_PROPERTY}));
}

$Class* CMNodeFactory::load$($String* name, bool initialize) {
	$loadClass(CMNodeFactory, name, initialize, &_CMNodeFactory_ClassInfo_, clinit$CMNodeFactory, allocate$CMNodeFactory);
	return class$;
}

$Class* CMNodeFactory::class$ = nullptr;

								} // models
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com