#ifndef _com_sun_org_apache_xerces_internal_util_SynchronizedSymbolTable_h_
#define _com_sun_org_apache_xerces_internal_util_SynchronizedSymbolTable_h_
//$ class com.sun.org.apache.xerces.internal.util.SynchronizedSymbolTable
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

class SynchronizedSymbolTable : public ::com::sun::org::apache::xerces::internal::util::SymbolTable {
	$class(SynchronizedSymbolTable, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::util::SymbolTable)
public:
	SynchronizedSymbolTable();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$();
	void init$(int32_t size);
	virtual $String* addSymbol($String* symbol) override;
	virtual $String* addSymbol($chars* buffer, int32_t offset, int32_t length) override;
	virtual bool containsSymbol($String* symbol) override;
	virtual bool containsSymbol($chars* buffer, int32_t offset, int32_t length) override;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_SynchronizedSymbolTable_h_