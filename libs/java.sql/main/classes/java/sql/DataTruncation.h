#ifndef _java_sql_DataTruncation_h_
#define _java_sql_DataTruncation_h_
//$ class java.sql.DataTruncation
//$ extends java.sql.SQLWarning

#include <java/sql/SQLWarning.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace sql {

class $export DataTruncation : public ::java::sql::SQLWarning {
	$class(DataTruncation, $NO_CLASS_INIT, ::java::sql::SQLWarning)
public:
	DataTruncation();
	void init$(int32_t index, bool parameter, bool read, int32_t dataSize, int32_t transferSize);
	void init$(int32_t index, bool parameter, bool read, int32_t dataSize, int32_t transferSize, $Throwable* cause);
	virtual int32_t getDataSize();
	virtual int32_t getIndex();
	virtual bool getParameter();
	virtual bool getRead();
	virtual int32_t getTransferSize();
	int32_t index = 0;
	bool parameter = false;
	bool read = false;
	int32_t dataSize = 0;
	int32_t transferSize = 0;
	static const int64_t serialVersionUID = (int64_t)0x59B5CDAE7F4E5851;
	DataTruncation(const DataTruncation& e);
	virtual void throw$() override;
	inline DataTruncation* operator ->() {
		return (DataTruncation*)throwing$;
	}
};

	} // sql
} // java

#endif // _java_sql_DataTruncation_h_