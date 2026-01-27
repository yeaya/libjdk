#include <com/sun/org/apache/xalan/internal/xsltc/dom/DOMWSFilter.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOMEnhancedForDTM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/StripFilter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef INHERIT
#undef NOTSTRIP
#undef STRIP

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $DOMEnhancedForDTM = ::com::sun::org::apache::xalan::internal::xsltc::DOMEnhancedForDTM;
using $StripFilter = ::com::sun::org::apache::xalan::internal::xsltc::StripFilter;
using $AbstractTranslet = ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _DOMWSFilter_FieldInfo_[] = {
	{"m_translet", "Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;", nullptr, $PRIVATE, $field(DOMWSFilter, m_translet)},
	{"m_filter", "Lcom/sun/org/apache/xalan/internal/xsltc/StripFilter;", nullptr, $PRIVATE, $field(DOMWSFilter, m_filter)},
	{"m_mappings", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/xml/internal/dtm/DTM;[S>;", $PRIVATE, $field(DOMWSFilter, m_mappings)},
	{"m_currentDTM", "Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PRIVATE, $field(DOMWSFilter, m_currentDTM)},
	{"m_currentMapping", "[S", nullptr, $PRIVATE, $field(DOMWSFilter, m_currentMapping)},
	{}
};

$MethodInfo _DOMWSFilter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;)V", nullptr, $PUBLIC, $method(DOMWSFilter, init$, void, $AbstractTranslet*)},
	{"getShouldStripSpace", "(ILcom/sun/org/apache/xml/internal/dtm/DTM;)S", nullptr, $PUBLIC, $virtualMethod(DOMWSFilter, getShouldStripSpace, int16_t, int32_t, $DTM*)},
	{}
};

$ClassInfo _DOMWSFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.DOMWSFilter",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.dtm.DTMWSFilter",
	_DOMWSFilter_FieldInfo_,
	_DOMWSFilter_MethodInfo_
};

$Object* allocate$DOMWSFilter($Class* clazz) {
	return $of($alloc(DOMWSFilter));
}

void DOMWSFilter::init$($AbstractTranslet* translet) {
	$set(this, m_translet, translet);
	$set(this, m_mappings, $new($HashMap));
	if ($instanceOf($StripFilter, translet)) {
		$set(this, m_filter, $cast($StripFilter, translet));
	}
}

int16_t DOMWSFilter::getShouldStripSpace(int32_t node, $DTM* dtm) {
	$useLocalCurrentObjectStackCache();
	if (this->m_filter != nullptr && $instanceOf($DOM, dtm)) {
		$var($DOM, dom, $cast($DOM, dtm));
		int32_t type = 0;
		if ($instanceOf($DOMEnhancedForDTM, dtm)) {
			$var($DOMEnhancedForDTM, mappableDOM, $cast($DOMEnhancedForDTM, dtm));
			$var($shorts, mapping, nullptr);
			if (dtm == this->m_currentDTM) {
				$assign(mapping, this->m_currentMapping);
			} else {
				$assign(mapping, $cast($shorts, $nc(this->m_mappings)->get(dtm)));
				if (mapping == nullptr) {
					$var($StringArray, var$0, $nc(this->m_translet)->getNamesArray());
					$var($StringArray, var$1, $nc(this->m_translet)->getUrisArray());
					$assign(mapping, $nc(mappableDOM)->getMapping(var$0, var$1, $($nc(this->m_translet)->getTypesArray())));
					$nc(this->m_mappings)->put(dtm, mapping);
					$set(this, m_currentDTM, dtm);
					$set(this, m_currentMapping, mapping);
				}
			}
			int32_t expType = $nc(mappableDOM)->getExpandedTypeID(node);
			if (expType >= 0 && expType < $nc(mapping)->length) {
				type = mapping->get(expType);
			} else {
				type = -1;
			}
		} else {
			return $DTMWSFilter::INHERIT;
		}
		if ($nc(this->m_filter)->stripSpace(dom, node, type)) {
			return $DTMWSFilter::STRIP;
		} else {
			return $DTMWSFilter::NOTSTRIP;
		}
	} else {
		return $DTMWSFilter::NOTSTRIP;
	}
}

DOMWSFilter::DOMWSFilter() {
}

$Class* DOMWSFilter::load$($String* name, bool initialize) {
	$loadClass(DOMWSFilter, name, initialize, &_DOMWSFilter_ClassInfo_, allocate$DOMWSFilter);
	return class$;
}

$Class* DOMWSFilter::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com