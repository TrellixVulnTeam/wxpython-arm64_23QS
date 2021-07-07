/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/stdpaths.h>

    wxString* _wxStandardPaths_GetInstallPrefix(const wxStandardPaths* self)
    {
        #ifndef wxHAS_STDPATHS_INSTALL_PREFIX
            return new wxString;
        #else
            return new wxString(self->GetInstallPrefix());
        #endif
    }
    void _wxStandardPaths_SetInstallPrefix(wxStandardPaths* self, const wxString *prefix)
    {
        #ifndef wxHAS_STDPATHS_INSTALL_PREFIX
        #else
            self->SetInstallPrefix(*prefix);
        #endif
    }
    wxString* _wxStandardPaths_MSWGetShellDir(int csidl)
    {
        #ifdef __WXMSW__
            return new wxString(wxStandardPaths::MSWGetShellDir(csidl));
        #else
            return new wxString;
        #endif
    }


PyDoc_STRVAR(doc_wxStandardPaths_GetAppDocumentsDir, "GetAppDocumentsDir() -> String\n"
"\n"
"Return the directory for the document files used by this application.");

extern "C" {static PyObject *meth_wxStandardPaths_GetAppDocumentsDir(PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_GetAppDocumentsDir(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxStandardPaths *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStandardPaths, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxStandardPaths::GetAppDocumentsDir() : sipCpp->GetAppDocumentsDir()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_GetAppDocumentsDir, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_GetConfigDir, "GetConfigDir() -> String\n"
"\n"
"Return the directory containing the system config files.");

extern "C" {static PyObject *meth_wxStandardPaths_GetConfigDir(PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_GetConfigDir(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxStandardPaths *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStandardPaths, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxStandardPaths::GetConfigDir() : sipCpp->GetConfigDir()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_GetConfigDir, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_GetDataDir, "GetDataDir() -> String\n"
"\n"
"Return the location of the applications global, i.e. not user-\n"
"specific, data files.");

extern "C" {static PyObject *meth_wxStandardPaths_GetDataDir(PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_GetDataDir(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxStandardPaths *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStandardPaths, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxStandardPaths::GetDataDir() : sipCpp->GetDataDir()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_GetDataDir, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_GetDocumentsDir, "GetDocumentsDir() -> String\n"
"\n"
"Same as calling GetUserDir() with Dir_Documents parameter.");

extern "C" {static PyObject *meth_wxStandardPaths_GetDocumentsDir(PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_GetDocumentsDir(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxStandardPaths *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStandardPaths, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxStandardPaths::GetDocumentsDir() : sipCpp->GetDocumentsDir()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_GetDocumentsDir, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_GetExecutablePath, "GetExecutablePath() -> String\n"
"\n"
"Return the directory and the filename for the current executable.");

extern "C" {static PyObject *meth_wxStandardPaths_GetExecutablePath(PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_GetExecutablePath(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxStandardPaths *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStandardPaths, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxStandardPaths::GetExecutablePath() : sipCpp->GetExecutablePath()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_GetExecutablePath, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_GetInstallPrefix, "GetInstallPrefix() -> String\n"
"\n"
"Return the program installation prefix, e.g. /usr, /opt or\n"
"/home/zeitlin.");

extern "C" {static PyObject *meth_wxStandardPaths_GetInstallPrefix(PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_GetInstallPrefix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxStandardPaths *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStandardPaths, &sipCpp))
        {
             ::wxString*sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxStandardPaths_GetInstallPrefix(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_GetInstallPrefix, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_GetLocalDataDir, "GetLocalDataDir() -> String\n"
"\n"
"Return the location for application data files which are host-specific\n"
"and can't, or shouldn't, be shared with the other machines.");

extern "C" {static PyObject *meth_wxStandardPaths_GetLocalDataDir(PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_GetLocalDataDir(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxStandardPaths *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStandardPaths, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxStandardPaths::GetLocalDataDir() : sipCpp->GetLocalDataDir()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_GetLocalDataDir, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_GetLocalizedResourcesDir, "GetLocalizedResourcesDir(lang, category=ResourceCat_None) -> String\n"
"\n"
"Return the localized resources directory containing the resource files\n"
"of the specified category for the given language.");

extern "C" {static PyObject *meth_wxStandardPaths_GetLocalizedResourcesDir(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_GetLocalizedResourcesDir(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* lang;
        int langState = 0;
         ::wxStandardPaths::ResourceCat category =  ::wxStandardPaths::ResourceCat_None;
        const  ::wxStandardPaths *sipCpp;

        static const char *sipKwdList[] = {
            sipName_lang,
            sipName_category,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|E", &sipSelf, sipType_wxStandardPaths, &sipCpp, sipType_wxString,&lang, &langState, sipType_wxStandardPaths_ResourceCat, &category))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxStandardPaths::GetLocalizedResourcesDir(*lang,category) : sipCpp->GetLocalizedResourcesDir(*lang,category)));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(lang),sipType_wxString,langState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_GetLocalizedResourcesDir, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_GetPluginsDir, "GetPluginsDir() -> String\n"
"\n"
"Return the directory where the loadable modules (plugins) live.");

extern "C" {static PyObject *meth_wxStandardPaths_GetPluginsDir(PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_GetPluginsDir(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxStandardPaths *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStandardPaths, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxStandardPaths::GetPluginsDir() : sipCpp->GetPluginsDir()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_GetPluginsDir, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_GetResourcesDir, "GetResourcesDir() -> String\n"
"\n"
"Return the directory where the application resource files are located.");

extern "C" {static PyObject *meth_wxStandardPaths_GetResourcesDir(PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_GetResourcesDir(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxStandardPaths *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStandardPaths, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxStandardPaths::GetResourcesDir() : sipCpp->GetResourcesDir()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_GetResourcesDir, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_GetTempDir, "GetTempDir() -> String\n"
"\n"
"Return the directory for storing temporary files, for the current\n"
"user.");

extern "C" {static PyObject *meth_wxStandardPaths_GetTempDir(PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_GetTempDir(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxStandardPaths *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStandardPaths, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxStandardPaths::GetTempDir() : sipCpp->GetTempDir()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_GetTempDir, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_GetUserConfigDir, "GetUserConfigDir() -> String\n"
"\n"
"Return the directory for the user config files.");

extern "C" {static PyObject *meth_wxStandardPaths_GetUserConfigDir(PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_GetUserConfigDir(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxStandardPaths *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStandardPaths, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxStandardPaths::GetUserConfigDir() : sipCpp->GetUserConfigDir()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_GetUserConfigDir, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_GetUserDataDir, "GetUserDataDir() -> String\n"
"\n"
"Return the directory for the user-dependent application data files:");

extern "C" {static PyObject *meth_wxStandardPaths_GetUserDataDir(PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_GetUserDataDir(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxStandardPaths *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStandardPaths, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxStandardPaths::GetUserDataDir() : sipCpp->GetUserDataDir()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_GetUserDataDir, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_GetUserDir, "GetUserDir(userDir) -> String\n"
"\n"
"Return the path of the specified user data directory.");

extern "C" {static PyObject *meth_wxStandardPaths_GetUserDir(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_GetUserDir(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxStandardPaths::Dir userDir;
        const  ::wxStandardPaths *sipCpp;

        static const char *sipKwdList[] = {
            sipName_userDir,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxStandardPaths, &sipCpp, sipType_wxStandardPaths_Dir, &userDir))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxStandardPaths::GetUserDir(userDir) : sipCpp->GetUserDir(userDir)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_GetUserDir, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_GetUserLocalDataDir, "GetUserLocalDataDir() -> String\n"
"\n"
"Return the directory for user data files which shouldn't be shared\n"
"with the other machines.");

extern "C" {static PyObject *meth_wxStandardPaths_GetUserLocalDataDir(PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_GetUserLocalDataDir(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxStandardPaths *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStandardPaths, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxStandardPaths::GetUserLocalDataDir() : sipCpp->GetUserLocalDataDir()));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_GetUserLocalDataDir, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_SetInstallPrefix, "SetInstallPrefix(prefix)\n"
"\n"
"Lets wxStandardPaths know about the real program installation prefix\n"
"on a Unix system.");

extern "C" {static PyObject *meth_wxStandardPaths_SetInstallPrefix(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_SetInstallPrefix(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* prefix;
        int prefixState = 0;
         ::wxStandardPaths *sipCpp;

        static const char *sipKwdList[] = {
            sipName_prefix,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxStandardPaths, &sipCpp, sipType_wxString,&prefix, &prefixState))
        {
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        _wxStandardPaths_SetInstallPrefix(sipCpp, prefix);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
            sipReleaseType(const_cast< ::wxString *>(prefix),sipType_wxString,prefixState);

            if (sipIsErr)
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_SetInstallPrefix, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_UseAppInfo, "UseAppInfo(info)\n"
"\n"
"Controls what application information is used when constructing paths\n"
"that should be unique to this program, such as the application data\n"
"directory, the plugins directory on Unix, etc.");

extern "C" {static PyObject *meth_wxStandardPaths_UseAppInfo(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_UseAppInfo(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int info;
         ::wxStandardPaths *sipCpp;

        static const char *sipKwdList[] = {
            sipName_info,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxStandardPaths, &sipCpp, &info))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->UseAppInfo(info);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_UseAppInfo, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_SetFileLayout, "SetFileLayout(layout)\n"
"\n"
"Sets the current file layout.");

extern "C" {static PyObject *meth_wxStandardPaths_SetFileLayout(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_SetFileLayout(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxStandardPaths::FileLayout layout;
         ::wxStandardPaths *sipCpp;

        static const char *sipKwdList[] = {
            sipName_layout,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BE", &sipSelf, sipType_wxStandardPaths, &sipCpp, sipType_wxStandardPaths_FileLayout, &layout))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetFileLayout(layout);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_SetFileLayout, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_GetFileLayout, "GetFileLayout() -> FileLayout\n"
"\n"
"Returns the current file layout.");

extern "C" {static PyObject *meth_wxStandardPaths_GetFileLayout(PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_GetFileLayout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxStandardPaths *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxStandardPaths, &sipCpp))
        {
             ::wxStandardPaths::FileLayout sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetFileLayout();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxStandardPaths_FileLayout);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_GetFileLayout, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_MakeConfigFileName, "MakeConfigFileName(basename, conv=ConfigFileConv_Ext) -> String\n"
"\n"
"Return the file name which would be used by wxFileConfig if it were\n"
"constructed with basename.");

extern "C" {static PyObject *meth_wxStandardPaths_MakeConfigFileName(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_MakeConfigFileName(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* basename;
        int basenameState = 0;
         ::wxStandardPaths::ConfigFileConv conv =  ::wxStandardPaths::ConfigFileConv_Ext;
        const  ::wxStandardPaths *sipCpp;

        static const char *sipKwdList[] = {
            sipName_basename,
            sipName_conv,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|E", &sipSelf, sipType_wxStandardPaths, &sipCpp, sipType_wxString,&basename, &basenameState, sipType_wxStandardPaths_ConfigFileConv, &conv))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxStandardPaths::MakeConfigFileName(*basename,conv) : sipCpp->MakeConfigFileName(*basename,conv)));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(basename),sipType_wxString,basenameState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_MakeConfigFileName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_Get, "Get() -> StandardPaths\n"
"\n"
"Returns reference to the unique global standard paths object.");

extern "C" {static PyObject *meth_wxStandardPaths_Get(PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_Get(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::wxStandardPaths*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = & ::wxStandardPaths::Get();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxStandardPaths,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_Get, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxStandardPaths_MSWGetShellDir, "MSWGetShellDir(csidl) -> String\n"
"\n"
"Returns location of Windows shell special folder.");

extern "C" {static PyObject *meth_wxStandardPaths_MSWGetShellDir(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxStandardPaths_MSWGetShellDir(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int csidl;

        static const char *sipKwdList[] = {
            sipName_csidl,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "i", &csidl))
        {
             ::wxString*sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxStandardPaths_MSWGetShellDir(csidl);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_StandardPaths, sipName_MSWGetShellDir, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxStandardPaths(void *, int);}
static void release_wxStandardPaths(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxStandardPaths *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxStandardPaths(sipSimpleWrapper *);}
static void dealloc_wxStandardPaths(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxStandardPaths(sipGetAddress(sipSelf), 0);
    }
}


static PyMethodDef methods_wxStandardPaths[] = {
    {SIP_MLNAME_CAST(sipName_Get), meth_wxStandardPaths_Get, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStandardPaths_Get)},
    {SIP_MLNAME_CAST(sipName_GetAppDocumentsDir), meth_wxStandardPaths_GetAppDocumentsDir, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStandardPaths_GetAppDocumentsDir)},
    {SIP_MLNAME_CAST(sipName_GetConfigDir), meth_wxStandardPaths_GetConfigDir, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStandardPaths_GetConfigDir)},
    {SIP_MLNAME_CAST(sipName_GetDataDir), meth_wxStandardPaths_GetDataDir, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStandardPaths_GetDataDir)},
    {SIP_MLNAME_CAST(sipName_GetDocumentsDir), meth_wxStandardPaths_GetDocumentsDir, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStandardPaths_GetDocumentsDir)},
    {SIP_MLNAME_CAST(sipName_GetExecutablePath), meth_wxStandardPaths_GetExecutablePath, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStandardPaths_GetExecutablePath)},
    {SIP_MLNAME_CAST(sipName_GetFileLayout), meth_wxStandardPaths_GetFileLayout, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStandardPaths_GetFileLayout)},
    {SIP_MLNAME_CAST(sipName_GetInstallPrefix), meth_wxStandardPaths_GetInstallPrefix, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStandardPaths_GetInstallPrefix)},
    {SIP_MLNAME_CAST(sipName_GetLocalDataDir), meth_wxStandardPaths_GetLocalDataDir, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStandardPaths_GetLocalDataDir)},
    {SIP_MLNAME_CAST(sipName_GetLocalizedResourcesDir), SIP_MLMETH_CAST(meth_wxStandardPaths_GetLocalizedResourcesDir), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxStandardPaths_GetLocalizedResourcesDir)},
    {SIP_MLNAME_CAST(sipName_GetPluginsDir), meth_wxStandardPaths_GetPluginsDir, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStandardPaths_GetPluginsDir)},
    {SIP_MLNAME_CAST(sipName_GetResourcesDir), meth_wxStandardPaths_GetResourcesDir, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStandardPaths_GetResourcesDir)},
    {SIP_MLNAME_CAST(sipName_GetTempDir), meth_wxStandardPaths_GetTempDir, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStandardPaths_GetTempDir)},
    {SIP_MLNAME_CAST(sipName_GetUserConfigDir), meth_wxStandardPaths_GetUserConfigDir, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStandardPaths_GetUserConfigDir)},
    {SIP_MLNAME_CAST(sipName_GetUserDataDir), meth_wxStandardPaths_GetUserDataDir, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStandardPaths_GetUserDataDir)},
    {SIP_MLNAME_CAST(sipName_GetUserDir), SIP_MLMETH_CAST(meth_wxStandardPaths_GetUserDir), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxStandardPaths_GetUserDir)},
    {SIP_MLNAME_CAST(sipName_GetUserLocalDataDir), meth_wxStandardPaths_GetUserLocalDataDir, METH_VARARGS, SIP_MLDOC_CAST(doc_wxStandardPaths_GetUserLocalDataDir)},
    {SIP_MLNAME_CAST(sipName_MSWGetShellDir), SIP_MLMETH_CAST(meth_wxStandardPaths_MSWGetShellDir), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxStandardPaths_MSWGetShellDir)},
    {SIP_MLNAME_CAST(sipName_MakeConfigFileName), SIP_MLMETH_CAST(meth_wxStandardPaths_MakeConfigFileName), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxStandardPaths_MakeConfigFileName)},
    {SIP_MLNAME_CAST(sipName_SetFileLayout), SIP_MLMETH_CAST(meth_wxStandardPaths_SetFileLayout), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxStandardPaths_SetFileLayout)},
    {SIP_MLNAME_CAST(sipName_SetInstallPrefix), SIP_MLMETH_CAST(meth_wxStandardPaths_SetInstallPrefix), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxStandardPaths_SetInstallPrefix)},
    {SIP_MLNAME_CAST(sipName_UseAppInfo), SIP_MLMETH_CAST(meth_wxStandardPaths_UseAppInfo), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxStandardPaths_UseAppInfo)}
};

static sipEnumMemberDef enummembers_wxStandardPaths[] = {
    {sipName_ConfigFileConv_Dot, static_cast<int>( ::wxStandardPaths::ConfigFileConv_Dot), 505},
    {sipName_ConfigFileConv_Ext, static_cast<int>( ::wxStandardPaths::ConfigFileConv_Ext), 505},
    {sipName_Dir_Cache, static_cast<int>( ::wxStandardPaths::Dir_Cache), 506},
    {sipName_Dir_Desktop, static_cast<int>( ::wxStandardPaths::Dir_Desktop), 506},
    {sipName_Dir_Documents, static_cast<int>( ::wxStandardPaths::Dir_Documents), 506},
    {sipName_Dir_Downloads, static_cast<int>( ::wxStandardPaths::Dir_Downloads), 506},
    {sipName_Dir_Music, static_cast<int>( ::wxStandardPaths::Dir_Music), 506},
    {sipName_Dir_Pictures, static_cast<int>( ::wxStandardPaths::Dir_Pictures), 506},
    {sipName_Dir_Videos, static_cast<int>( ::wxStandardPaths::Dir_Videos), 506},
    {sipName_FileLayout_Classic, static_cast<int>( ::wxStandardPaths::FileLayout_Classic), 507},
    {sipName_FileLayout_XDG, static_cast<int>( ::wxStandardPaths::FileLayout_XDG), 507},
    {sipName_ResourceCat_Messages, static_cast<int>( ::wxStandardPaths::ResourceCat_Messages), 508},
    {sipName_ResourceCat_None, static_cast<int>( ::wxStandardPaths::ResourceCat_None), 508},
};

sipVariableDef variables_wxStandardPaths[] = {
    {PropertyVariable, sipName_UserLocalDataDir, &methods_wxStandardPaths[16], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_UserDataDir, &methods_wxStandardPaths[14], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_UserConfigDir, &methods_wxStandardPaths[13], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_TempDir, &methods_wxStandardPaths[12], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_ResourcesDir, &methods_wxStandardPaths[11], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_PluginsDir, &methods_wxStandardPaths[10], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_LocalDataDir, &methods_wxStandardPaths[8], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_InstallPrefix, &methods_wxStandardPaths[7], &methods_wxStandardPaths[20], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_ExecutablePath, &methods_wxStandardPaths[5], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_DocumentsDir, &methods_wxStandardPaths[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_DataDir, &methods_wxStandardPaths[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_ConfigDir, &methods_wxStandardPaths[2], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_AppDocumentsDir, &methods_wxStandardPaths[1], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxStandardPaths, "StandardPaths()\n"
"\n"
"wxStandardPaths returns the standard locations in the file system and\n"
"should be used by applications to find their data files in a portable\n"
"way.");


sipClassTypeDef sipTypeDef__core_wxStandardPaths = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxStandardPaths,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_StandardPaths,
        {0, 0, 1},
        22, methods_wxStandardPaths,
        13, enummembers_wxStandardPaths,
        13, variables_wxStandardPaths,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxStandardPaths,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_wxStandardPaths,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxStandardPaths,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};