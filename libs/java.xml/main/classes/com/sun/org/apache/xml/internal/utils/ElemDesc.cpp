#include <com/sun/org/apache/xml/internal/utils/ElemDesc.h>

#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
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
#undef HEADMISC
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

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _ElemDesc_FieldInfo_[] = {
	{"m_attrs", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", 0, $field(ElemDesc, m_attrs)},
	{"m_flags", "I", nullptr, 0, $field(ElemDesc, m_flags)},
	{"EMPTY", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, EMPTY)},
	{"FLOW", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, FLOW)},
	{"BLOCK", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, BLOCK)},
	{"BLOCKFORM", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, BLOCKFORM)},
	{"BLOCKFORMFIELDSET", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, BLOCKFORMFIELDSET)},
	{"CDATA", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, CDATA)},
	{"PCDATA", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, PCDATA)},
	{"RAW", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, RAW)},
	{"INLINE", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, INLINE)},
	{"INLINEA", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, INLINEA)},
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
	{"ATTRURL", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, ATTRURL)},
	{"ATTREMPTY", "I", nullptr, $STATIC | $FINAL, $constField(ElemDesc, ATTREMPTY)},
	{}
};

$MethodInfo _ElemDesc_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(ElemDesc, init$, void, int32_t)},
	{"is", "(I)Z", nullptr, 0, $virtualMethod(ElemDesc, is, bool, int32_t)},
	{"isAttrFlagSet", "(Ljava/lang/String;I)Z", nullptr, 0, $virtualMethod(ElemDesc, isAttrFlagSet, bool, $String*, int32_t)},
	{"setAttr", "(Ljava/lang/String;I)V", nullptr, 0, $virtualMethod(ElemDesc, setAttr, void, $String*, int32_t)},
	{}
};

$ClassInfo _ElemDesc_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.ElemDesc",
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

void ElemDesc::setAttr($String* name, int32_t flags) {
	if (nullptr == this->m_attrs) {
		$set(this, m_attrs, $new($HashMap));
	}
	$nc(this->m_attrs)->put(name, $($Integer::valueOf(flags)));
}

bool ElemDesc::isAttrFlagSet($String* name, int32_t flags) {
	if (nullptr != this->m_attrs) {
		$var($Integer, _flags, $cast($Integer, $nc(this->m_attrs)->get(name)));
		if (nullptr != _flags) {
			return ((int32_t)(_flags->intValue() & (uint32_t)flags)) != 0;
		}
	}
	return false;
}

ElemDesc::ElemDesc() {
}

$Class* ElemDesc::load$($String* name, bool initialize) {
	$loadClass(ElemDesc, name, initialize, &_ElemDesc_ClassInfo_, allocate$ElemDesc);
	return class$;
}

$Class* ElemDesc::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com