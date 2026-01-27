#ifndef _com_sun_xml_internal_stream_util_ReadOnlyIterator_h_
#define _com_sun_xml_internal_stream_util_ReadOnlyIterator_h_
//$ class com.sun.xml.internal.stream.util.ReadOnlyIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace util {

class ReadOnlyIterator : public ::java::util::Iterator {
	$class(ReadOnlyIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ReadOnlyIterator();
	void init$();
	void init$(::java::util::Iterator* itr);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::Iterator* iterator = nullptr;
};

					} // util
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_util_ReadOnlyIterator_h_