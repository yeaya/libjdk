#include <com/sun/org/apache/xerces/internal/impl/xs/opti/TextImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultNode.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultText.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOM.h>
#include <java/lang/StringBuffer.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef INDEX_SIZE_ERR
#undef TEXT_NODE

using $DefaultNode = ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultNode;
using $DefaultText = ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultText;
using $SchemaDOM = ::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOM;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $DOMException = ::org::w3c::dom::DOMException;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {

$FieldInfo _TextImpl_FieldInfo_[] = {
	{"fData", "Ljava/lang/String;", nullptr, 0, $field(TextImpl, fData)},
	{"fSchemaDOM", "Lcom/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOM;", nullptr, 0, $field(TextImpl, fSchemaDOM)},
	{"fRow", "I", nullptr, 0, $field(TextImpl, fRow)},
	{"fCol", "I", nullptr, 0, $field(TextImpl, fCol)},
	{}
};

$MethodInfo _TextImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/StringBuffer;Lcom/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOM;II)V", nullptr, $PUBLIC, $method(TextImpl, init$, void, $StringBuffer*, $SchemaDOM*, int32_t, int32_t)},
	{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TextImpl, getData, $String*), "org.w3c.dom.DOMException"},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(TextImpl, getLength, int32_t)},
	{"getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(TextImpl, getNextSibling, $Node*)},
	{"getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(TextImpl, getParentNode, $Node*)},
	{"getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(TextImpl, getPreviousSibling, $Node*)},
	{"substringData", "(II)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TextImpl, substringData, $String*, int32_t, int32_t), "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _TextImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.opti.TextImpl",
	"com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultText",
	nullptr,
	_TextImpl_FieldInfo_,
	_TextImpl_MethodInfo_
};

$Object* allocate$TextImpl($Class* clazz) {
	return $of($alloc(TextImpl));
}

void TextImpl::init$($StringBuffer* str, $SchemaDOM* sDOM, int32_t row, int32_t col) {
	$DefaultText::init$();
	$set(this, fData, nullptr);
	$set(this, fSchemaDOM, nullptr);
	$set(this, fData, $nc(str)->toString());
	$set(this, fSchemaDOM, sDOM);
	this->fRow = row;
	this->fCol = col;
	$set(this, rawname, ($set(this, prefix, ($set(this, localpart, ($set(this, uri, nullptr)))))));
	this->nodeType = $Node::TEXT_NODE;
}

$Node* TextImpl::getParentNode() {
	return $nc($nc($nc(this->fSchemaDOM)->relations)->get(this->fRow))->get(0);
}

$Node* TextImpl::getPreviousSibling() {
	if (this->fCol == 1) {
		return nullptr;
	}
	return $nc($nc($nc(this->fSchemaDOM)->relations)->get(this->fRow))->get(this->fCol - 1);
}

$Node* TextImpl::getNextSibling() {
	if (this->fCol == $nc($nc($nc(this->fSchemaDOM)->relations)->get(this->fRow))->length - 1) {
		return nullptr;
	}
	return $nc($nc($nc(this->fSchemaDOM)->relations)->get(this->fRow))->get(this->fCol + 1);
}

$String* TextImpl::getData() {
	return this->fData;
}

int32_t TextImpl::getLength() {
	if (this->fData == nullptr) {
		return 0;
	}
	return $nc(this->fData)->length();
}

$String* TextImpl::substringData(int32_t offset, int32_t count) {
	if (this->fData == nullptr) {
		return nullptr;
	}
	if (count < 0 || offset < 0 || offset > $nc(this->fData)->length()) {
		$throwNew($DOMException, $DOMException::INDEX_SIZE_ERR, "parameter error"_s);
	}
	if (offset + count >= $nc(this->fData)->length()) {
		return $nc(this->fData)->substring(offset);
	}
	return $nc(this->fData)->substring(offset, offset + count);
}

TextImpl::TextImpl() {
}

$Class* TextImpl::load$($String* name, bool initialize) {
	$loadClass(TextImpl, name, initialize, &_TextImpl_ClassInfo_, allocate$TextImpl);
	return class$;
}

$Class* TextImpl::class$ = nullptr;

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com