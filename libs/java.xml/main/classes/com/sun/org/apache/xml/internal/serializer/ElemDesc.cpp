#include <com/sun/org/apache/xml/internal/serializer/ElemDesc.h>

#include <com/sun/org/apache/xml/internal/serializer/utils/StringToIntTable.h>
#include <jcpp.h>

#undef ASPECIAL
#undef ATTREMPTY
#undef ATTRURL
#undef BLOCK
#undef BLOCKFORM
#undef BLOCKFORMFIELDSET
#undef CDATA
#undef EMPTY
#undef FLOW
#undef FONTSTYLE
#undef FORMCTRL
#undef HEAD
#undef HEADELEM
#undef HEADMISC
#undef HTMLELEM
#undef INLINE
#undef INLINEA
#undef INLINELABEL
#undef LIST
#undef PCDATA
#undef PHRASE
#undef PREFORMATTED
#undef RAW
#undef SPECIAL
#undef WHITESPACESENSITIVE

using $StringToIntTable = ::com::sun::org::apache::xml::internal::serializer::utils::StringToIntTable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _ElemDesc_FieldInfo_[] = {
	{"m_flags", "I", nullptr, $PRIVATE, $field(ElemDesc, m_flags)},
	{"m_attrs", "Lcom/sun/org/apache/xml/internal/serializer/utils/StringToIntTable;", nullptr, $PRIVATE, $field(ElemDesc, m_attrs)},
	{"EMPTY", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, EMPTY)},
	{"FLOW", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElemDesc, FLOW)},
	{"BLOCK", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, BLOCK)},
	{"BLOCKFORM", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, BLOCKFORM)},
	{"BLOCKFORMFIELDSET", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, BLOCKFORMFIELDSET)},
	{"CDATA", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElemDesc, CDATA)},
	{"PCDATA", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElemDesc, PCDATA)},
	{"RAW", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, RAW)},
	{"INLINE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElemDesc, INLINE)},
	{"INLINEA", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElemDesc, INLINEA)},
	{"INLINELABEL", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, INLINELABEL)},
	{"FONTSTYLE", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, FONTSTYLE)},
	{"PHRASE", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, PHRASE)},
	{"FORMCTRL", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, FORMCTRL)},
	{"SPECIAL", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, SPECIAL)},
	{"ASPECIAL", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, ASPECIAL)},
	{"HEADMISC", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, HEADMISC)},
	{"HEAD", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, HEAD)},
	{"LIST", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, LIST)},
	{"PREFORMATTED", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, PREFORMATTED)},
	{"WHITESPACESENSITIVE", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, WHITESPACESENSITIVE)},
	{"HEADELEM", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, HEADELEM)},
	{"HTMLELEM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ElemDesc, HTMLELEM)},
	{"ATTRURL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElemDesc, ATTRURL)},
	{"ATTREMPTY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElemDesc, ATTREMPTY)},
	{}
};

$MethodInfo _ElemDesc_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(ElemDesc, init$, void, int32_t)},
	{"getFlags", "()I", nullptr, 0, $method(ElemDesc, getFlags, int32_t)},
	{"is", "(I)Z", nullptr, $PRIVATE, $method(ElemDesc, is, bool, int32_t)},
	{"isAttrFlagSet", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC, $method(ElemDesc, isAttrFlagSet, bool, $String*, int32_t)},
	{"setAttr", "(Ljava/lang/String;I)V", nullptr, 0, $method(ElemDesc, setAttr, void, $String*, int32_t)},
	{}
};

$ClassInfo _ElemDesc_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.ElemDesc",
	"java.lang.Object",
	nullptr,
	_ElemDesc_FieldInfo_,
	_ElemDesc_MethodInfo_
};

$Object* allocate$ElemDesc($Class* clazz) {
	return $of($alloc(ElemDesc));
}

void ElemDesc::init$(int32_t flags) {
	$set(this, m_attrs, nullptr);
	this->m_flags = flags;
}

bool ElemDesc::is(int32_t flags) {
	return ((int32_t)(this->m_flags & (uint32_t)flags)) != 0;
}

int32_t ElemDesc::getFlags() {
	return this->m_flags;
}

void ElemDesc::setAttr($String* name, int32_t flags) {
	if (nullptr == this->m_attrs) {
		$set(this, m_attrs, $new($StringToIntTable));
	}
	$nc(this->m_attrs)->put(name, flags);
}

bool ElemDesc::isAttrFlagSet($String* name, int32_t flags) {
	return (nullptr != this->m_attrs) ? (((int32_t)($nc(this->m_attrs)->getIgnoreCase(name) & (uint32_t)flags)) != 0) : false;
}

ElemDesc::ElemDesc() {
}

$Class* ElemDesc::load$($String* name, bool initialize) {
	$loadClass(ElemDesc, name, initialize, &_ElemDesc_ClassInfo_, allocate$ElemDesc);
	return class$;
}

$Class* ElemDesc::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com