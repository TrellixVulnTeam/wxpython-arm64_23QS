/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/apptrait.h>

        #include <wx/stdpaths.h>
        #include <wx/log.h>
        #include <wx/evtloop.h>
        #include <wx/config.h>


PyDoc_STRVAR(doc_wxAppTraits_CreateConfig, "CreateConfig() -> ConfigBase\n"
"\n"
"Called by wxWidgets to create the default configuration object for the\n"
"application.");

extern "C" {static PyObject *meth_wxAppTraits_CreateConfig(PyObject *, PyObject *);}
static PyObject *meth_wxAppTraits_CreateConfig(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxAppTraits *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAppTraits, &sipCpp))
        {
             ::wxConfigBase*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxAppTraits::CreateConfig() : sipCpp->CreateConfig());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxConfigBase,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AppTraits, sipName_CreateConfig, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAppTraits_CreateEventLoop, "CreateEventLoop() -> EventLoopBase\n"
"\n"
"Used by wxWidgets to create the main event loop used by\n"
"wxApp::OnRun().");

extern "C" {static PyObject *meth_wxAppTraits_CreateEventLoop(PyObject *, PyObject *);}
static PyObject *meth_wxAppTraits_CreateEventLoop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxAppTraits *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAppTraits, &sipCpp))
        {
             ::wxEventLoopBase*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AppTraits, sipName_CreateEventLoop);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->CreateEventLoop();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEventLoopBase,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AppTraits, sipName_CreateEventLoop, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAppTraits_CreateLogTarget, "CreateLogTarget() -> Log\n"
"\n"
"Creates a wxLog class for the application to use for logging errors.");

extern "C" {static PyObject *meth_wxAppTraits_CreateLogTarget(PyObject *, PyObject *);}
static PyObject *meth_wxAppTraits_CreateLogTarget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxAppTraits *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAppTraits, &sipCpp))
        {
             ::wxLog*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AppTraits, sipName_CreateLogTarget);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->CreateLogTarget();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxLog,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AppTraits, sipName_CreateLogTarget, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAppTraits_GetDesktopEnvironment, "GetDesktopEnvironment() -> String\n"
"\n"
"This method returns the name of the desktop environment currently\n"
"running in a Unix desktop.");

extern "C" {static PyObject *meth_wxAppTraits_GetDesktopEnvironment(PyObject *, PyObject *);}
static PyObject *meth_wxAppTraits_GetDesktopEnvironment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::wxAppTraits *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAppTraits, &sipCpp))
        {
             ::wxString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AppTraits, sipName_GetDesktopEnvironment);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetDesktopEnvironment());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AppTraits, sipName_GetDesktopEnvironment, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAppTraits_GetStandardPaths, "GetStandardPaths() -> StandardPaths\n"
"\n"
"Returns the wxStandardPaths object for the application.");

extern "C" {static PyObject *meth_wxAppTraits_GetStandardPaths(PyObject *, PyObject *);}
static PyObject *meth_wxAppTraits_GetStandardPaths(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxAppTraits *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAppTraits, &sipCpp))
        {
             ::wxStandardPaths*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = &(sipSelfWasArg ? sipCpp-> ::wxAppTraits::GetStandardPaths() : sipCpp->GetStandardPaths());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxStandardPaths,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AppTraits, sipName_GetStandardPaths, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAppTraits_GetToolkitVersion, "GetToolkitVersion() -> (PortId, major, minor, micro)\n"
"\n"
"Returns the wxWidgets port ID used by the running program and\n"
"eventually fills the given pointers with the values of the major,\n"
"minor, and micro digits of the native toolkit currently used.");

extern "C" {static PyObject *meth_wxAppTraits_GetToolkitVersion(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAppTraits_GetToolkitVersion(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        int major;
        int minor;
        int micro;
        const  ::wxAppTraits *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "B", &sipSelf, sipType_wxAppTraits, &sipCpp))
        {
             ::wxPortId sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AppTraits, sipName_GetToolkitVersion);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetToolkitVersion(&major,&minor,&micro);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipBuildResult(0,"(Fiii)",sipRes,sipType_wxPortId,major,minor,micro);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AppTraits, sipName_GetToolkitVersion, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAppTraits_HasStderr, "HasStderr() -> bool\n"
"\n"
"Returns true if fprintf(stderr) goes somewhere, false otherwise.");

extern "C" {static PyObject *meth_wxAppTraits_HasStderr(PyObject *, PyObject *);}
static PyObject *meth_wxAppTraits_HasStderr(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::wxAppTraits *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAppTraits, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AppTraits, sipName_HasStderr);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->HasStderr();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AppTraits, sipName_HasStderr, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAppTraits_IsUsingUniversalWidgets, "IsUsingUniversalWidgets() -> bool\n"
"\n"
"Returns true if the library was built as wxUniversal.");

extern "C" {static PyObject *meth_wxAppTraits_IsUsingUniversalWidgets(PyObject *, PyObject *);}
static PyObject *meth_wxAppTraits_IsUsingUniversalWidgets(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::wxAppTraits *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxAppTraits, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AppTraits, sipName_IsUsingUniversalWidgets);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsUsingUniversalWidgets();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AppTraits, sipName_IsUsingUniversalWidgets, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxAppTraits_ShowAssertDialog, "ShowAssertDialog(msg) -> bool\n"
"\n"
"Shows the assert dialog with the specified message in GUI mode or just\n"
"prints the string to stderr in console mode.");

extern "C" {static PyObject *meth_wxAppTraits_ShowAssertDialog(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxAppTraits_ShowAssertDialog(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::wxString* msg;
        int msgState = 0;
         ::wxAppTraits *sipCpp;

        static const char *sipKwdList[] = {
            sipName_msg,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxAppTraits, &sipCpp, sipType_wxString,&msg, &msgState))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AppTraits, sipName_ShowAssertDialog);
                return SIP_NULLPTR;
            }

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->ShowAssertDialog(*msg);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(msg),sipType_wxString,msgState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AppTraits, sipName_ShowAssertDialog, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxAppTraits(void *, int);}
static void release_wxAppTraits(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxAppTraits *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxAppTraits(sipSimpleWrapper *);}
static void dealloc_wxAppTraits(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxAppTraits(sipGetAddress(sipSelf), 0);
    }
}


static PyMethodDef methods_wxAppTraits[] = {
    {SIP_MLNAME_CAST(sipName_CreateConfig), meth_wxAppTraits_CreateConfig, METH_VARARGS, SIP_MLDOC_CAST(doc_wxAppTraits_CreateConfig)},
    {SIP_MLNAME_CAST(sipName_CreateEventLoop), meth_wxAppTraits_CreateEventLoop, METH_VARARGS, SIP_MLDOC_CAST(doc_wxAppTraits_CreateEventLoop)},
    {SIP_MLNAME_CAST(sipName_CreateLogTarget), meth_wxAppTraits_CreateLogTarget, METH_VARARGS, SIP_MLDOC_CAST(doc_wxAppTraits_CreateLogTarget)},
    {SIP_MLNAME_CAST(sipName_GetDesktopEnvironment), meth_wxAppTraits_GetDesktopEnvironment, METH_VARARGS, SIP_MLDOC_CAST(doc_wxAppTraits_GetDesktopEnvironment)},
    {SIP_MLNAME_CAST(sipName_GetStandardPaths), meth_wxAppTraits_GetStandardPaths, METH_VARARGS, SIP_MLDOC_CAST(doc_wxAppTraits_GetStandardPaths)},
    {SIP_MLNAME_CAST(sipName_GetToolkitVersion), SIP_MLMETH_CAST(meth_wxAppTraits_GetToolkitVersion), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAppTraits_GetToolkitVersion)},
    {SIP_MLNAME_CAST(sipName_HasStderr), meth_wxAppTraits_HasStderr, METH_VARARGS, SIP_MLDOC_CAST(doc_wxAppTraits_HasStderr)},
    {SIP_MLNAME_CAST(sipName_IsUsingUniversalWidgets), meth_wxAppTraits_IsUsingUniversalWidgets, METH_VARARGS, SIP_MLDOC_CAST(doc_wxAppTraits_IsUsingUniversalWidgets)},
    {SIP_MLNAME_CAST(sipName_ShowAssertDialog), SIP_MLMETH_CAST(meth_wxAppTraits_ShowAssertDialog), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxAppTraits_ShowAssertDialog)}
};

sipVariableDef variables_wxAppTraits[] = {
    {PropertyVariable, sipName_ToolkitVersion, &methods_wxAppTraits[5], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_StandardPaths, &methods_wxAppTraits[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_DesktopEnvironment, &methods_wxAppTraits[3], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxAppTraits, "The wxAppTraits class defines various configurable aspects of a wxApp.");


sipClassTypeDef sipTypeDef__core_wxAppTraits = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxAppTraits,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_AppTraits,
        {0, 0, 1},
        9, methods_wxAppTraits,
        0, SIP_NULLPTR,
        3, variables_wxAppTraits,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxAppTraits,
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
    dealloc_wxAppTraits,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxAppTraits,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};