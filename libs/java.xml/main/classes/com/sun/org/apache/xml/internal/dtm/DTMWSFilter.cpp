#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <jcpp.h>

#undef INHERIT
#undef NOTSTRIP
#undef STRIP

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
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

$Class* DTMWSFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NOTSTRIP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMWSFilter, NOTSTRIP)},
		{"STRIP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMWSFilter, STRIP)},
		{"INHERIT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMWSFilter, INHERIT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getShouldStripSpace", "(ILcom/sun/org/apache/xml/internal/dtm/DTM;)S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMWSFilter, getShouldStripSpace, int16_t, int32_t, $DTM*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.dtm.DTMWSFilter",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DTMWSFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTMWSFilter);
	});
	return class$;
}

$Class* DTMWSFilter::class$ = nullptr;

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com