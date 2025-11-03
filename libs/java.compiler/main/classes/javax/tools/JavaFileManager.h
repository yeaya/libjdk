#ifndef _javax_tools_JavaFileManager_h_
#define _javax_tools_JavaFileManager_h_
//$ interface javax.tools.JavaFileManager
//$ extends java.io.Closeable,java.io.Flushable,javax.tools.OptionChecker

#include <java/io/Closeable.h>
#include <java/io/Flushable.h>
#include <javax/tools/OptionChecker.h>

namespace java {
	namespace lang {
		class ClassLoader;
		class Iterable;
	}
}
namespace java {
	namespace util {
		class Iterator;
		class ServiceLoader;
		class Set;
	}
}
namespace javax {
	namespace tools {
		class FileObject;
		class JavaFileManager$Location;
		class JavaFileObject;
		class JavaFileObject$Kind;
	}
}

namespace javax {
	namespace tools {

class $export JavaFileManager : public ::java::io::Closeable, public ::java::io::Flushable, public ::javax::tools::OptionChecker {
	$interface(JavaFileManager, $NO_CLASS_INIT, ::java::io::Closeable, ::java::io::Flushable, ::javax::tools::OptionChecker)
public:
	virtual $Object* clone() override;
	virtual void close() override {}
	virtual bool contains(::javax::tools::JavaFileManager$Location* location, ::javax::tools::FileObject* fo);
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flush() override {}
	virtual ::java::lang::ClassLoader* getClassLoader(::javax::tools::JavaFileManager$Location* location) {return nullptr;}
	virtual ::javax::tools::FileObject* getFileForInput(::javax::tools::JavaFileManager$Location* location, $String* packageName, $String* relativeName) {return nullptr;}
	virtual ::javax::tools::FileObject* getFileForOutput(::javax::tools::JavaFileManager$Location* location, $String* packageName, $String* relativeName, ::javax::tools::FileObject* sibling) {return nullptr;}
	virtual ::javax::tools::JavaFileObject* getJavaFileForInput(::javax::tools::JavaFileManager$Location* location, $String* className, ::javax::tools::JavaFileObject$Kind* kind) {return nullptr;}
	virtual ::javax::tools::JavaFileObject* getJavaFileForOutput(::javax::tools::JavaFileManager$Location* location, $String* className, ::javax::tools::JavaFileObject$Kind* kind, ::javax::tools::FileObject* sibling) {return nullptr;}
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule(::javax::tools::JavaFileManager$Location* location, $String* moduleName);
	virtual ::javax::tools::JavaFileManager$Location* getLocationForModule(::javax::tools::JavaFileManager$Location* location, ::javax::tools::JavaFileObject* fo);
	virtual ::java::util::ServiceLoader* getServiceLoader(::javax::tools::JavaFileManager$Location* location, $Class* service);
	virtual bool handleOption($String* current, ::java::util::Iterator* remaining) {return false;}
	virtual bool hasLocation(::javax::tools::JavaFileManager$Location* location) {return false;}
	virtual int32_t hashCode() override;
	virtual $String* inferBinaryName(::javax::tools::JavaFileManager$Location* location, ::javax::tools::JavaFileObject* file) {return nullptr;}
	virtual $String* inferModuleName(::javax::tools::JavaFileManager$Location* location);
	virtual bool isSameFile(::javax::tools::FileObject* a, ::javax::tools::FileObject* b) {return false;}
	virtual ::java::lang::Iterable* list(::javax::tools::JavaFileManager$Location* location, $String* packageName, ::java::util::Set* kinds, bool recurse) {return nullptr;}
	virtual ::java::lang::Iterable* listLocationsForModules(::javax::tools::JavaFileManager$Location* location);
	virtual $String* toString() override;
};

	} // tools
} // javax

#endif // _javax_tools_JavaFileManager_h_