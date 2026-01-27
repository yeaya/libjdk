#ifndef _com_sun_org_apache_xml_internal_dtm_ref_CoroutineManager_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_CoroutineManager_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.CoroutineManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ANYBODY")
#undef ANYBODY
#pragma push_macro("NOBODY")
#undef NOBODY

namespace java {
	namespace util {
		class BitSet;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

class CoroutineManager : public ::java::lang::Object {
	$class(CoroutineManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CoroutineManager();
	void init$();
	virtual $Object* co_entry_pause(int32_t thisCoroutine);
	virtual void co_exit(int32_t thisCoroutine);
	virtual void co_exit_to(Object$* arg_object, int32_t thisCoroutine, int32_t toCoroutine);
	virtual int32_t co_joinCoroutineSet(int32_t coroutineID);
	virtual $Object* co_resume(Object$* arg_object, int32_t thisCoroutine, int32_t toCoroutine);
	::java::util::BitSet* m_activeIDs = nullptr;
	static const int32_t m_unreasonableId = 1024;
	$Object* m_yield = nullptr;
	static const int32_t NOBODY = (-1);
	static const int32_t ANYBODY = (-1);
	int32_t m_nextCoroutine = 0;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ANYBODY")
#pragma pop_macro("NOBODY")

#endif // _com_sun_org_apache_xml_internal_dtm_ref_CoroutineManager_h_