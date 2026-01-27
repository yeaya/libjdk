#ifndef _com_sun_org_apache_xml_internal_dtm_Axis_h_
#define _com_sun_org_apache_xml_internal_dtm_Axis_h_
//$ class com.sun.org.apache.xml.internal.dtm.Axis
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALL")
#undef ALL
#pragma push_macro("ALLFROMNODE")
#undef ALLFROMNODE
#pragma push_macro("ANCESTOR")
#undef ANCESTOR
#pragma push_macro("ANCESTORORSELF")
#undef ANCESTORORSELF
#pragma push_macro("ATTRIBUTE")
#undef ATTRIBUTE
#pragma push_macro("CHILD")
#undef CHILD
#pragma push_macro("DESCENDANT")
#undef DESCENDANT
#pragma push_macro("DESCENDANTORSELF")
#undef DESCENDANTORSELF
#pragma push_macro("DESCENDANTSFROMROOT")
#undef DESCENDANTSFROMROOT
#pragma push_macro("DESCENDANTSORSELFFROMROOT")
#undef DESCENDANTSORSELFFROMROOT
#pragma push_macro("FILTEREDLIST")
#undef FILTEREDLIST
#pragma push_macro("FOLLOWING")
#undef FOLLOWING
#pragma push_macro("FOLLOWINGSIBLING")
#undef FOLLOWINGSIBLING
#pragma push_macro("NAMESPACE")
#undef NAMESPACE
#pragma push_macro("NAMESPACEDECLS")
#undef NAMESPACEDECLS
#pragma push_macro("PARENT")
#undef PARENT
#pragma push_macro("PRECEDING")
#undef PRECEDING
#pragma push_macro("PRECEDINGANDANCESTOR")
#undef PRECEDINGANDANCESTOR
#pragma push_macro("PRECEDINGSIBLING")
#undef PRECEDINGSIBLING
#pragma push_macro("ROOT")
#undef ROOT
#pragma push_macro("SELF")
#undef SELF

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

class $export Axis : public ::java::lang::Object {
	$class(Axis, 0, ::java::lang::Object)
public:
	Axis();
	void init$();
	static $String* getNames(int32_t index);
	static int32_t getNamesLength();
	static bool isReverse(int32_t axis);
	static const int32_t ANCESTOR = 0;
	static const int32_t ANCESTORORSELF = 1;
	static const int32_t ATTRIBUTE = 2;
	static const int32_t CHILD = 3;
	static const int32_t DESCENDANT = 4;
	static const int32_t DESCENDANTORSELF = 5;
	static const int32_t FOLLOWING = 6;
	static const int32_t FOLLOWINGSIBLING = 7;
	static const int32_t NAMESPACEDECLS = 8;
	static const int32_t NAMESPACE = 9;
	static const int32_t PARENT = 10;
	static const int32_t PRECEDING = 11;
	static const int32_t PRECEDINGSIBLING = 12;
	static const int32_t SELF = 13;
	static const int32_t ALLFROMNODE = 14;
	static const int32_t PRECEDINGANDANCESTOR = 15;
	static const int32_t ALL = 16;
	static const int32_t DESCENDANTSFROMROOT = 17;
	static const int32_t DESCENDANTSORSELFFROMROOT = 18;
	static const int32_t ROOT = 19;
	static const int32_t FILTEREDLIST = 20;
	static $booleans* isReverse$;
	static $StringArray* names;
};

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ALL")
#pragma pop_macro("ALLFROMNODE")
#pragma pop_macro("ANCESTOR")
#pragma pop_macro("ANCESTORORSELF")
#pragma pop_macro("ATTRIBUTE")
#pragma pop_macro("CHILD")
#pragma pop_macro("DESCENDANT")
#pragma pop_macro("DESCENDANTORSELF")
#pragma pop_macro("DESCENDANTSFROMROOT")
#pragma pop_macro("DESCENDANTSORSELFFROMROOT")
#pragma pop_macro("FILTEREDLIST")
#pragma pop_macro("FOLLOWING")
#pragma pop_macro("FOLLOWINGSIBLING")
#pragma pop_macro("NAMESPACE")
#pragma pop_macro("NAMESPACEDECLS")
#pragma pop_macro("PARENT")
#pragma pop_macro("PRECEDING")
#pragma pop_macro("PRECEDINGANDANCESTOR")
#pragma pop_macro("PRECEDINGSIBLING")
#pragma pop_macro("ROOT")
#pragma pop_macro("SELF")

#endif // _com_sun_org_apache_xml_internal_dtm_Axis_h_