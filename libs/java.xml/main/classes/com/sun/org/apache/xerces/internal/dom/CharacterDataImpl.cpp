#include <com/sun/org/apache/xerces/internal/dom/CharacterDataImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CharacterDataImpl$1.h>
#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <java/lang/Math.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef DOM_DOMAIN
#undef INDEX_SIZE_ERR
#undef NO_MODIFICATION_ALLOWED_ERR

using $CharacterDataImpl$1 = ::com::sun::org::apache::xerces::internal::dom::CharacterDataImpl$1;
using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;
using $DOMException = ::org::w3c::dom::DOMException;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$NodeList* CharacterDataImpl::singletonNodeList = nullptr;

void CharacterDataImpl::init$() {
	$ChildNode::init$();
}

void CharacterDataImpl::init$($CoreDocumentImpl* ownerDocument, $String* data) {
	$ChildNode::init$(ownerDocument);
	$set(this, data, data);
}

$NodeList* CharacterDataImpl::getChildNodes() {
	return CharacterDataImpl::singletonNodeList;
}

$String* CharacterDataImpl::getNodeValue() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->data;
}

void CharacterDataImpl::setNodeValueInternal($String* value) {
	setNodeValueInternal(value, false);
}

void CharacterDataImpl::setNodeValueInternal($String* value, bool replace) {
	$useLocalObjectStack();
	$var($CoreDocumentImpl, ownerDocument, this->ownerDocument());
	if ($nc(ownerDocument)->errorChecking && isReadOnly()) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
	}
	if (needsSyncData()) {
		synchronizeData();
	}
	$var($String, oldvalue, this->data);
	ownerDocument->modifyingCharacterData(this, replace);
	$set(this, data, value);
	ownerDocument->modifiedCharacterData(this, oldvalue, value, replace);
}

void CharacterDataImpl::setNodeValue($String* value) {
	setNodeValueInternal(value);
	$$nc(ownerDocument())->replacedText(this);
}

$String* CharacterDataImpl::getData() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->data;
}

int32_t CharacterDataImpl::getLength() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return $nc(this->data)->length();
}

void CharacterDataImpl::appendData($String* data) {
	$useLocalObjectStack();
	if (isReadOnly()) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
	}
	if (data == nullptr) {
		return;
	}
	if (needsSyncData()) {
		synchronizeData();
	}
	setNodeValue($$str({this->data, data}));
}

void CharacterDataImpl::deleteData(int32_t offset, int32_t count) {
	internalDeleteData(offset, count, false);
}

void CharacterDataImpl::internalDeleteData(int32_t offset, int32_t count, bool replace) {
	$useLocalObjectStack();
	$var($CoreDocumentImpl, ownerDocument, this->ownerDocument());
	if ($nc(ownerDocument)->errorChecking) {
		if (isReadOnly()) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
		}
		if (count < 0) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INDEX_SIZE_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::INDEX_SIZE_ERR, msg);
		}
	}
	if (needsSyncData()) {
		synchronizeData();
	}
	int32_t tailLength = $Math::max($nc(this->data)->length() - count - offset, 0);
	try {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($(this->data->substring(0, offset)));
		var$0->append(tailLength > 0 ? $(this->data->substring(offset + count, offset + count + tailLength)) : ""_s);
		$var($String, value, $str(var$0));
		setNodeValueInternal(value, replace);
		ownerDocument->deletedText(this, offset, count);
	} catch ($StringIndexOutOfBoundsException& e) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INDEX_SIZE_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::INDEX_SIZE_ERR, msg);
	}
}

void CharacterDataImpl::insertData(int32_t offset, $String* data) {
	internalInsertData(offset, data, false);
}

void CharacterDataImpl::internalInsertData(int32_t offset, $String* data, bool replace) {
	$useLocalObjectStack();
	$var($CoreDocumentImpl, ownerDocument, this->ownerDocument());
	if ($nc(ownerDocument)->errorChecking && isReadOnly()) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
	}
	if (needsSyncData()) {
		synchronizeData();
	}
	try {
		$var($String, value, $$new($StringBuffer, this->data)->insert(offset, data)->toString());
		setNodeValueInternal(value, replace);
		ownerDocument->insertedText(this, offset, $nc(data)->length());
	} catch ($StringIndexOutOfBoundsException& e) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INDEX_SIZE_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::INDEX_SIZE_ERR, msg);
	}
}

void CharacterDataImpl::replaceData(int32_t offset, int32_t count, $String* data) {
	$useLocalObjectStack();
	$var($CoreDocumentImpl, ownerDocument, this->ownerDocument());
	if ($nc(ownerDocument)->errorChecking && isReadOnly()) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
	}
	if (needsSyncData()) {
		synchronizeData();
	}
	ownerDocument->replacingData(this);
	$var($String, oldvalue, this->data);
	internalDeleteData(offset, count, true);
	internalInsertData(offset, data, true);
	ownerDocument->replacedCharacterData(this, oldvalue, this->data);
}

void CharacterDataImpl::setData($String* value) {
	setNodeValue(value);
}

$String* CharacterDataImpl::substringData(int32_t offset, int32_t count) {
	if (needsSyncData()) {
		synchronizeData();
	}
	int32_t length = $nc(this->data)->length();
	if (count < 0 || offset < 0 || offset > length - 1) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INDEX_SIZE_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::INDEX_SIZE_ERR, msg);
	}
	int32_t tailIndex = $Math::min(offset + count, length);
	return $nc(this->data)->substring(offset, tailIndex);
}

void CharacterDataImpl::clinit$($Class* clazz) {
	$assignStatic(CharacterDataImpl::singletonNodeList, $new($CharacterDataImpl$1));
}

CharacterDataImpl::CharacterDataImpl() {
}

$Class* CharacterDataImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(CharacterDataImpl, serialVersionUID)},
		{"data", "Ljava/lang/String;", nullptr, $PROTECTED, $field(CharacterDataImpl, data)},
		{"singletonNodeList", "Lorg/w3c/dom/NodeList;", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticField(CharacterDataImpl, singletonNodeList)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CharacterDataImpl, init$, void)},
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(CharacterDataImpl, init$, void, $CoreDocumentImpl*, $String*)},
		{"appendData", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CharacterDataImpl, appendData, void, $String*)},
		{"deleteData", "(II)V", nullptr, $PUBLIC, $virtualMethod(CharacterDataImpl, deleteData, void, int32_t, int32_t), "org.w3c.dom.DOMException"},
		{"getChildNodes", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(CharacterDataImpl, getChildNodes, $NodeList*)},
		{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CharacterDataImpl, getData, $String*)},
		{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(CharacterDataImpl, getLength, int32_t)},
		{"getNodeValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CharacterDataImpl, getNodeValue, $String*)},
		{"insertData", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CharacterDataImpl, insertData, void, int32_t, $String*), "org.w3c.dom.DOMException"},
		{"internalDeleteData", "(IIZ)V", nullptr, 0, $virtualMethod(CharacterDataImpl, internalDeleteData, void, int32_t, int32_t, bool), "org.w3c.dom.DOMException"},
		{"internalInsertData", "(ILjava/lang/String;Z)V", nullptr, 0, $virtualMethod(CharacterDataImpl, internalInsertData, void, int32_t, $String*, bool), "org.w3c.dom.DOMException"},
		{"replaceData", "(IILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CharacterDataImpl, replaceData, void, int32_t, int32_t, $String*), "org.w3c.dom.DOMException"},
		{"setData", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CharacterDataImpl, setData, void, $String*), "org.w3c.dom.DOMException"},
		{"setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CharacterDataImpl, setNodeValue, void, $String*)},
		{"setNodeValueInternal", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(CharacterDataImpl, setNodeValueInternal, void, $String*)},
		{"setNodeValueInternal", "(Ljava/lang/String;Z)V", nullptr, $PROTECTED, $virtualMethod(CharacterDataImpl, setNodeValueInternal, void, $String*, bool)},
		{"substringData", "(II)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CharacterDataImpl, substringData, $String*, int32_t, int32_t), "org.w3c.dom.DOMException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.dom.CharacterDataImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.dom.CharacterDataImpl",
		"com.sun.org.apache.xerces.internal.dom.ChildNode",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.dom.CharacterDataImpl$1"
	};
	$loadClass(CharacterDataImpl, name, initialize, &classInfo$$, CharacterDataImpl::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(CharacterDataImpl));
	});
	return class$;
}

$Class* CharacterDataImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com