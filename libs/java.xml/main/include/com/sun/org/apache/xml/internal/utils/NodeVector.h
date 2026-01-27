#ifndef _com_sun_org_apache_xml_internal_utils_NodeVector_h_
#define _com_sun_org_apache_xml_internal_utils_NodeVector_h_
//$ class com.sun.org.apache.xml.internal.utils.NodeVector
//$ extends java.io.Serializable
//$ implements java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $import NodeVector : public ::java::io::Serializable, public ::java::lang::Cloneable {
	$class(NodeVector, $NO_CLASS_INIT, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	NodeVector();
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t blocksize);
	virtual void RemoveAllNoClear();
	virtual void addElement(int32_t value);
	virtual void appendNodes(::com::sun::org::apache::xml::internal::utils::NodeVector* nodes);
	virtual $Object* clone() override;
	virtual bool contains(int32_t s);
	virtual int32_t elementAt(int32_t i);
	virtual int32_t indexOf(int32_t elem, int32_t index);
	virtual int32_t indexOf(int32_t elem);
	virtual void insertElementAt(int32_t value, int32_t at);
	virtual void insertInOrder(int32_t value);
	int32_t peepOrNull();
	int32_t peepTail();
	int32_t peepTailSub1();
	int32_t pop();
	int32_t popAndTop();
	void popPair();
	void popQuick();
	void push(int32_t value);
	void pushPair(int32_t v1, int32_t v2);
	virtual void removeAllElements();
	virtual bool removeElement(int32_t s);
	virtual void removeElementAt(int32_t i);
	virtual void setElementAt(int32_t node, int32_t index);
	void setTail(int32_t n);
	void setTailSub1(int32_t n);
	virtual int32_t size();
	virtual void sort($ints* a, int32_t lo0, int32_t hi0);
	virtual void sort();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xF6193C00B6936B22;
	int32_t m_blocksize = 0;
	$ints* m_map = nullptr;
	int32_t m_firstFree = 0;
	int32_t m_mapSize = 0;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_NodeVector_h_