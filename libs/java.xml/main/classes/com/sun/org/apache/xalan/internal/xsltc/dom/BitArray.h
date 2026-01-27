#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_BitArray_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_BitArray_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.BitArray
//$ extends java.io.Externalizable

#include <java/io/Externalizable.h>
#include <java/lang/Array.h>

#pragma push_macro("DEBUG_ASSERTIONS")
#undef DEBUG_ASSERTIONS

namespace java {
	namespace io {
		class ObjectInput;
		class ObjectOutput;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

class BitArray : public ::java::io::Externalizable {
	$class(BitArray, 0, ::java::io::Externalizable)
public:
	BitArray();
	void init$();
	void init$(int32_t size);
	void init$(int32_t size, $ints* bits);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::BitArray* cloneArray();
	$ints* data();
	bool getBit(int32_t bit);
	int32_t getBitNumber(int32_t pos);
	virtual int32_t getMask();
	int32_t getNextBit(int32_t startBit);
	::com::sun::org::apache::xalan::internal::xsltc::dom::BitArray* merge(::com::sun::org::apache::xalan::internal::xsltc::dom::BitArray* other);
	virtual void readExternal(::java::io::ObjectInput* in) override;
	void resize(int32_t newSize);
	void setBit(int32_t bit);
	virtual void setMask(int32_t mask);
	int32_t size();
	virtual void writeExternal(::java::io::ObjectOutput* out) override;
	static const int64_t serialVersionUID = (int64_t)0xBC54E5C0B4A273C1;
	$ints* _bits = nullptr;
	int32_t _bitSize = 0;
	int32_t _intSize = 0;
	int32_t _mask = 0;
	static $ints* _masks;
	static const bool DEBUG_ASSERTIONS = false;
	int32_t _pos = 0;
	int32_t _node = 0;
	int32_t _int = 0;
	int32_t _bit = 0;
	int32_t _first = 0;
	int32_t _last = 0;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG_ASSERTIONS")

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_BitArray_h_