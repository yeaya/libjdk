#ifndef _com_sun_org_apache_xerces_internal_util_ShadowedSymbolTable_h_
#define _com_sun_org_apache_xerces_internal_util_ShadowedSymbolTable_h_
//$ class com.sun.org.apache.xerces.internal.util.ShadowedSymbolTable
//$ extends com.sun.org.apache.xerces.internal.util.SymbolTable

#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class ShadowedSymbolTable : public ::com::sun::org::apache::xerces::internal::util::SymbolTable {
	$class(ShadowedSymbolTable, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::util::SymbolTable)
public:
	ShadowedSymbolTable();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	virtual $String* addSymbol($String* symbol) override;
	virtual $String* addSymbol($chars* buffer, int32_t offset, int32_t length) override;
	virtual int32_t hash($String* symbol) override;
	virtual int32_t hash($chars* buffer, int32_t offset, int32_t length) override;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_ShadowedSymbolTable_h_