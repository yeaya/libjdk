#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>

#include <jcpp.h>

#undef SHOW_ALL
#undef SHOW_ATTRIBUTE
#undef SHOW_BYFUNCTION
#undef SHOW_CDATA_SECTION
#undef SHOW_COMMENT
#undef SHOW_DOCUMENT
#undef SHOW_DOCUMENT_FRAGMENT
#undef SHOW_DOCUMENT_TYPE
#undef SHOW_ELEMENT
#undef SHOW_ENTITY
#undef SHOW_ENTITY_REFERENCE
#undef SHOW_NAMESPACE
#undef SHOW_NOTATION
#undef SHOW_PROCESSING_INSTRUCTION
#undef SHOW_TEXT

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

$FieldInfo _DTMFilter_FieldInfo_[] = {
	{"SHOW_ALL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMFilter, SHOW_ALL)},
	{"SHOW_ELEMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMFilter, SHOW_ELEMENT)},
	{"SHOW_ATTRIBUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMFilter, SHOW_ATTRIBUTE)},
	{"SHOW_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMFilter, SHOW_TEXT)},
	{"SHOW_CDATA_SECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMFilter, SHOW_CDATA_SECTION)},
	{"SHOW_ENTITY_REFERENCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMFilter, SHOW_ENTITY_REFERENCE)},
	{"SHOW_ENTITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMFilter, SHOW_ENTITY)},
	{"SHOW_PROCESSING_INSTRUCTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMFilter, SHOW_PROCESSING_INSTRUCTION)},
	{"SHOW_COMMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMFilter, SHOW_COMMENT)},
	{"SHOW_DOCUMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMFilter, SHOW_DOCUMENT)},
	{"SHOW_DOCUMENT_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMFilter, SHOW_DOCUMENT_TYPE)},
	{"SHOW_DOCUMENT_FRAGMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMFilter, SHOW_DOCUMENT_FRAGMENT)},
	{"SHOW_NOTATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMFilter, SHOW_NOTATION)},
	{"SHOW_NAMESPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMFilter, SHOW_NAMESPACE)},
	{"SHOW_BYFUNCTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMFilter, SHOW_BYFUNCTION)},
	{}
};

$MethodInfo _DTMFilter_MethodInfo_[] = {
	{"acceptNode", "(II)S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMFilter, acceptNode, int16_t, int32_t, int32_t)},
	{"acceptNode", "(III)S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMFilter, acceptNode, int16_t, int32_t, int32_t, int32_t)},
	{}
};

$ClassInfo _DTMFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.DTMFilter",
	nullptr,
	nullptr,
	_DTMFilter_FieldInfo_,
	_DTMFilter_MethodInfo_
};

$Object* allocate$DTMFilter($Class* clazz) {
	return $of($alloc(DTMFilter));
}

$Class* DTMFilter::load$($String* name, bool initialize) {
	$loadClass(DTMFilter, name, initialize, &_DTMFilter_ClassInfo_, allocate$DTMFilter);
	return class$;
}

$Class* DTMFilter::class$ = nullptr;

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com