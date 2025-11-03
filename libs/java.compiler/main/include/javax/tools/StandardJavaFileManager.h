#ifndef _javax_tools_StandardJavaFileManager_h_
#define _javax_tools_StandardJavaFileManager_h_
//$ interface javax.tools.StandardJavaFileManager
//$ extends javax.tools.JavaFileManager

#include <java/lang/Array.h>
#include <javax/tools/JavaFileManager.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Iterator;
	}
}
namespace javax {
	namespace tools {
		class FileObject;
		class JavaFileManager$Location;
		class StandardJavaFileManager$PathFactory;
	}
}

namespace javax {
	namespace tools {

class $import StandardJavaFileManager : public ::javax::tools::JavaFileManager {
	$interface(StandardJavaFileManager, $NO_CLASS_INIT, ::javax::tools::JavaFileManager)
public:
	static ::java::util::Collection* asCollection(::java::lang::Iterable* iterable);
	static ::java::lang::Iterable* asFiles(::java::lang::Iterable* paths);
	virtual ::java::nio::file::Path* asPath(::javax::tools::FileObject* file);
	static ::java::lang::Iterable* asPaths(::java::lang::Iterable* files);
	virtual ::java::lang::Iterable* getJavaFileObjects($Array<::java::io::File>* files) {return nullptr;}
	virtual ::java::lang::Iterable* getJavaFileObjects($Array<::java::nio::file::Path>* paths);
	virtual ::java::lang::Iterable* getJavaFileObjects($StringArray* names) {return nullptr;}
	virtual ::java::lang::Iterable* getJavaFileObjectsFromFiles(::java::lang::Iterable* files) {return nullptr;}
	virtual ::java::lang::Iterable* getJavaFileObjectsFromPaths(::java::util::Collection* paths);
	virtual ::java::lang::Iterable* getJavaFileObjectsFromPaths(::java::lang::Iterable* paths);
	virtual ::java::lang::Iterable* getJavaFileObjectsFromStrings(::java::lang::Iterable* names) {return nullptr;}
	virtual ::java::lang::Iterable* getLocation(::javax::tools::JavaFileManager$Location* location) {return nullptr;}
	virtual ::java::lang::Iterable* getLocationAsPaths(::javax::tools::JavaFileManager$Location* location);
	virtual bool isSameFile(::javax::tools::FileObject* a, ::javax::tools::FileObject* b) override {return false;}
	static ::java::util::Iterator* lambda$asFiles$1(::java::lang::Iterable* paths);
	static ::java::util::Iterator* lambda$asPaths$0(::java::lang::Iterable* files);
	virtual void setLocation(::javax::tools::JavaFileManager$Location* location, ::java::lang::Iterable* files) {}
	virtual void setLocationForModule(::javax::tools::JavaFileManager$Location* location, $String* moduleName, ::java::util::Collection* paths);
	virtual void setLocationFromPaths(::javax::tools::JavaFileManager$Location* location, ::java::util::Collection* paths);
	virtual void setPathFactory(::javax::tools::StandardJavaFileManager$PathFactory* f);
};

	} // tools
} // javax

#endif // _javax_tools_StandardJavaFileManager_h_