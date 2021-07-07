/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/process.h>

        #include <wx/event.h>
        #include <wx/stream.h>
        #include <wx/stream.h>
        #include <wx/event.h>
        #include <wx/eventfilter.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxProcess : public  ::wxProcess
{
public:
    sipwxProcess( ::wxEvtHandler*,int);
    sipwxProcess(int);
    virtual ~sipwxProcess();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    bool sipProtectVirt_TryBefore(bool, ::wxEvent&);
    bool sipProtectVirt_TryAfter(bool, ::wxEvent&);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void OnTerminate(int,int) SIP_OVERRIDE;
    bool ProcessEvent( ::wxEvent&) SIP_OVERRIDE;
    bool TryBefore( ::wxEvent&) SIP_OVERRIDE;
    bool TryAfter( ::wxEvent&) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxProcess(const sipwxProcess &);
    sipwxProcess &operator = (const sipwxProcess &);

    char sipPyMethods[4];
};

sipwxProcess::sipwxProcess( ::wxEvtHandler*parent,int id):  ::wxProcess(parent,id), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxProcess::sipwxProcess(int flags):  ::wxProcess(flags), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxProcess::~sipwxProcess()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxProcess::OnTerminate(int pid,int status)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_OnTerminate);

    if (!sipMeth)
    {
         ::wxProcess::OnTerminate(pid,status);
        return;
    }

    extern void sipVH__core_127(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,int);

    sipVH__core_127(sipGILState, 0, sipPySelf, sipMeth, pid, status);
}

bool sipwxProcess::ProcessEvent( ::wxEvent& event)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_ProcessEvent);

    if (!sipMeth)
        return  ::wxProcess::ProcessEvent(event);

    extern bool sipVH__core_96(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxEvent&);

    return sipVH__core_96(sipGILState, 0, sipPySelf, sipMeth, event);
}

bool sipwxProcess::TryBefore( ::wxEvent& event)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_TryBefore);

    if (!sipMeth)
        return  ::wxProcess::TryBefore(event);

    extern bool sipVH__core_96(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxEvent&);

    return sipVH__core_96(sipGILState, 0, sipPySelf, sipMeth, event);
}

bool sipwxProcess::TryAfter( ::wxEvent& event)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_TryAfter);

    if (!sipMeth)
        return  ::wxProcess::TryAfter(event);

    extern bool sipVH__core_96(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxEvent&);

    return sipVH__core_96(sipGILState, 0, sipPySelf, sipMeth, event);
}

bool sipwxProcess::sipProtectVirt_TryBefore(bool sipSelfWasArg, ::wxEvent& event)
{
    return (sipSelfWasArg ?  ::wxEvtHandler::TryBefore(event) : TryBefore(event));
}

bool sipwxProcess::sipProtectVirt_TryAfter(bool sipSelfWasArg, ::wxEvent& event)
{
    return (sipSelfWasArg ?  ::wxEvtHandler::TryAfter(event) : TryAfter(event));
}


PyDoc_STRVAR(doc_wxProcess_TryBefore, "TryBefore(event) -> bool\n"
"\n"
"Method called by ProcessEvent() before examining this object event\n"
"tables.");

extern "C" {static PyObject *meth_wxProcess_TryBefore(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxProcess_TryBefore(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxEvent* event;
        sipwxProcess *sipCpp;

        static const char *sipKwdList[] = {
            sipName_event,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxProcess, &sipCpp, sipType_wxEvent, &event))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtectVirt_TryBefore(sipSelfWasArg,*event);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_TryBefore, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxProcess_TryAfter, "TryAfter(event) -> bool\n"
"\n"
"Method called by ProcessEvent() as last resort.");

extern "C" {static PyObject *meth_wxProcess_TryAfter(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxProcess_TryAfter(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxEvent* event;
        sipwxProcess *sipCpp;

        static const char *sipKwdList[] = {
            sipName_event,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ9", &sipSelf, sipType_wxProcess, &sipCpp, sipType_wxEvent, &event))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtectVirt_TryAfter(sipSelfWasArg,*event);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_TryAfter, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxProcess_Activate, "Activate() -> bool\n"
"\n"
"Activates a GUI process by bringing up its main window to the front.");

extern "C" {static PyObject *meth_wxProcess_Activate(PyObject *, PyObject *);}
static PyObject *meth_wxProcess_Activate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxProcess *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxProcess, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->Activate();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_Activate, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxProcess_CloseOutput, "CloseOutput()\n"
"\n"
"Closes the output stream (the one connected to the stdin of the child\n"
"process).");

extern "C" {static PyObject *meth_wxProcess_CloseOutput(PyObject *, PyObject *);}
static PyObject *meth_wxProcess_CloseOutput(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxProcess *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxProcess, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->CloseOutput();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_CloseOutput, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxProcess_Detach, "Detach()\n"
"\n"
"Detaches this event handler from the parent specified in the\n"
"constructor (see wxEvtHandler::Unlink() for a similar but not\n"
"identical function).");

extern "C" {static PyObject *meth_wxProcess_Detach(PyObject *, PyObject *);}
static PyObject *meth_wxProcess_Detach(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxProcess *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxProcess, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Detach();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_Detach, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxProcess_GetErrorStream, "GetErrorStream() -> InputStream\n"
"\n"
"Returns an input stream which corresponds to the standard error output\n"
"(stderr) of the child process.");

extern "C" {static PyObject *meth_wxProcess_GetErrorStream(PyObject *, PyObject *);}
static PyObject *meth_wxProcess_GetErrorStream(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxProcess *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxProcess, &sipCpp))
        {
             ::wxInputStream*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetErrorStream();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxInputStream,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_GetErrorStream, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxProcess_GetInputStream, "GetInputStream() -> InputStream\n"
"\n"
"It returns an input stream corresponding to the standard output stream\n"
"of the subprocess.");

extern "C" {static PyObject *meth_wxProcess_GetInputStream(PyObject *, PyObject *);}
static PyObject *meth_wxProcess_GetInputStream(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxProcess *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxProcess, &sipCpp))
        {
             ::wxInputStream*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetInputStream();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxInputStream,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_GetInputStream, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxProcess_GetOutputStream, "GetOutputStream() -> OutputStream\n"
"\n"
"It returns an output stream corresponding to the input stream of the\n"
"subprocess.");

extern "C" {static PyObject *meth_wxProcess_GetOutputStream(PyObject *, PyObject *);}
static PyObject *meth_wxProcess_GetOutputStream(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxProcess *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxProcess, &sipCpp))
        {
             ::wxOutputStream*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetOutputStream();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxOutputStream,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_GetOutputStream, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxProcess_GetPid, "GetPid() -> long\n"
"\n"
"Returns the process ID of the process launched by Open() or set by\n"
"wxExecute() (if you passed this wxProcess as argument).");

extern "C" {static PyObject *meth_wxProcess_GetPid(PyObject *, PyObject *);}
static PyObject *meth_wxProcess_GetPid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxProcess *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxProcess, &sipCpp))
        {
            long sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->GetPid();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_GetPid, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxProcess_IsErrorAvailable, "IsErrorAvailable() -> bool\n"
"\n"
"Returns true if there is data to be read on the child process standard\n"
"error stream.");

extern "C" {static PyObject *meth_wxProcess_IsErrorAvailable(PyObject *, PyObject *);}
static PyObject *meth_wxProcess_IsErrorAvailable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxProcess *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxProcess, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsErrorAvailable();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_IsErrorAvailable, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxProcess_IsInputAvailable, "IsInputAvailable() -> bool\n"
"\n"
"Returns true if there is data to be read on the child process standard\n"
"output stream.");

extern "C" {static PyObject *meth_wxProcess_IsInputAvailable(PyObject *, PyObject *);}
static PyObject *meth_wxProcess_IsInputAvailable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxProcess *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxProcess, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsInputAvailable();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_IsInputAvailable, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxProcess_IsInputOpened, "IsInputOpened() -> bool\n"
"\n"
"Returns true if the child process standard output stream is opened.");

extern "C" {static PyObject *meth_wxProcess_IsInputOpened(PyObject *, PyObject *);}
static PyObject *meth_wxProcess_IsInputOpened(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxProcess *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxProcess, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsInputOpened();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_IsInputOpened, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxProcess_OnTerminate, "OnTerminate(pid, status)\n"
"\n"
"It is called when the process with the pid pid finishes.");

extern "C" {static PyObject *meth_wxProcess_OnTerminate(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxProcess_OnTerminate(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int pid;
        int status;
         ::wxProcess *sipCpp;

        static const char *sipKwdList[] = {
            sipName_pid,
            sipName_status,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bii", &sipSelf, sipType_wxProcess, &sipCpp, &pid, &status))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::wxProcess::OnTerminate(pid,status) : sipCpp->OnTerminate(pid,status));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_OnTerminate, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxProcess_Redirect, "Redirect()\n"
"\n"
"Turns on redirection.");

extern "C" {static PyObject *meth_wxProcess_Redirect(PyObject *, PyObject *);}
static PyObject *meth_wxProcess_Redirect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxProcess *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxProcess, &sipCpp))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->Redirect();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_Redirect, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxProcess_SetPriority, "SetPriority(priority)\n"
"\n"
"Sets the priority of the process, between 0 (lowest) and 100\n"
"(highest).");

extern "C" {static PyObject *meth_wxProcess_SetPriority(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxProcess_SetPriority(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        uint priority;
         ::wxProcess *sipCpp;

        static const char *sipKwdList[] = {
            sipName_priority,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bu", &sipSelf, sipType_wxProcess, &sipCpp, &priority))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetPriority(priority);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_SetPriority, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxProcess_Exists, "Exists(pid) -> bool\n"
"\n"
"Returns true if the given process exists in the system.");

extern "C" {static PyObject *meth_wxProcess_Exists(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxProcess_Exists(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int pid;

        static const char *sipKwdList[] = {
            sipName_pid,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "i", &pid))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxProcess::Exists(pid);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_Exists, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxProcess_Kill, "Kill(pid, sig=SIGTERM, flags=KILL_NOCHILDREN) -> KillError\n"
"\n"
"Send the specified signal to the given process.");

extern "C" {static PyObject *meth_wxProcess_Kill(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxProcess_Kill(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int pid;
         ::wxSignal sig = wxSIGTERM;
        int flags = wxKILL_NOCHILDREN;

        static const char *sipKwdList[] = {
            sipName_pid,
            sipName_sig,
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "i|Ei", &pid, sipType_wxSignal, &sig, &flags))
        {
             ::wxKillError sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxProcess::Kill(pid,sig,flags);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_wxKillError);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_Kill, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxProcess_Open, "Open(cmd, flags=EXEC_ASYNC) -> Process\n"
"\n"
"This static method replaces the standard popen() function: it launches\n"
"the process specified by the cmd parameter and returns the wxProcess\n"
"object which can be used to retrieve the streams connected to the\n"
"standard input, output and error output of the child process.");

extern "C" {static PyObject *meth_wxProcess_Open(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxProcess_Open(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* cmd;
        int cmdState = 0;
        int flags = wxEXEC_ASYNC;

        static const char *sipKwdList[] = {
            sipName_cmd,
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1|i", sipType_wxString,&cmd, &cmdState, &flags))
        {
             ::wxProcess*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes =  ::wxProcess::Open(*cmd,flags);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(cmd),sipType_wxString,cmdState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromType(sipRes,sipType_wxProcess,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Process, sipName_Open, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxProcess(void *, const sipTypeDef *);}
static void *cast_wxProcess(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxProcess *sipCpp = reinterpret_cast< ::wxProcess *>(sipCppV);

    if (targetType == sipType_wxEvtHandler)
        return static_cast< ::wxEvtHandler *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    if (targetType == sipType_wxTrackable)
        return static_cast< ::wxTrackable *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxProcess(void *, int);}
static void release_wxProcess(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxProcess *>(sipCppV);
    else
        delete reinterpret_cast< ::wxProcess *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxProcess(sipSimpleWrapper *);}
static void dealloc_wxProcess(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxProcess *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxProcess(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxProcess(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxProcess(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxProcess *sipCpp = SIP_NULLPTR;

    {
         ::wxEvtHandler* parent = 0;
        int id = -1;

        static const char *sipKwdList[] = {
            sipName_parent,
            sipName_id,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J8i", sipType_wxEvtHandler, &parent, &id))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxProcess(parent,id);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        int flags;

        static const char *sipKwdList[] = {
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "i", &flags))
        {

        if (!wxPyCheckForApp()) return NULL;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxProcess(flags);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxProcess[] = {{154, 255, 1}};


static PyMethodDef methods_wxProcess[] = {
    {SIP_MLNAME_CAST(sipName_Activate), meth_wxProcess_Activate, METH_VARARGS, SIP_MLDOC_CAST(doc_wxProcess_Activate)},
    {SIP_MLNAME_CAST(sipName_CloseOutput), meth_wxProcess_CloseOutput, METH_VARARGS, SIP_MLDOC_CAST(doc_wxProcess_CloseOutput)},
    {SIP_MLNAME_CAST(sipName_Detach), meth_wxProcess_Detach, METH_VARARGS, SIP_MLDOC_CAST(doc_wxProcess_Detach)},
    {SIP_MLNAME_CAST(sipName_Exists), SIP_MLMETH_CAST(meth_wxProcess_Exists), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxProcess_Exists)},
    {SIP_MLNAME_CAST(sipName_GetErrorStream), meth_wxProcess_GetErrorStream, METH_VARARGS, SIP_MLDOC_CAST(doc_wxProcess_GetErrorStream)},
    {SIP_MLNAME_CAST(sipName_GetInputStream), meth_wxProcess_GetInputStream, METH_VARARGS, SIP_MLDOC_CAST(doc_wxProcess_GetInputStream)},
    {SIP_MLNAME_CAST(sipName_GetOutputStream), meth_wxProcess_GetOutputStream, METH_VARARGS, SIP_MLDOC_CAST(doc_wxProcess_GetOutputStream)},
    {SIP_MLNAME_CAST(sipName_GetPid), meth_wxProcess_GetPid, METH_VARARGS, SIP_MLDOC_CAST(doc_wxProcess_GetPid)},
    {SIP_MLNAME_CAST(sipName_IsErrorAvailable), meth_wxProcess_IsErrorAvailable, METH_VARARGS, SIP_MLDOC_CAST(doc_wxProcess_IsErrorAvailable)},
    {SIP_MLNAME_CAST(sipName_IsInputAvailable), meth_wxProcess_IsInputAvailable, METH_VARARGS, SIP_MLDOC_CAST(doc_wxProcess_IsInputAvailable)},
    {SIP_MLNAME_CAST(sipName_IsInputOpened), meth_wxProcess_IsInputOpened, METH_VARARGS, SIP_MLDOC_CAST(doc_wxProcess_IsInputOpened)},
    {SIP_MLNAME_CAST(sipName_Kill), SIP_MLMETH_CAST(meth_wxProcess_Kill), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxProcess_Kill)},
    {SIP_MLNAME_CAST(sipName_OnTerminate), SIP_MLMETH_CAST(meth_wxProcess_OnTerminate), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxProcess_OnTerminate)},
    {SIP_MLNAME_CAST(sipName_Open), SIP_MLMETH_CAST(meth_wxProcess_Open), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxProcess_Open)},
    {SIP_MLNAME_CAST(sipName_Redirect), meth_wxProcess_Redirect, METH_VARARGS, SIP_MLDOC_CAST(doc_wxProcess_Redirect)},
    {SIP_MLNAME_CAST(sipName_SetPriority), SIP_MLMETH_CAST(meth_wxProcess_SetPriority), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxProcess_SetPriority)},
    {SIP_MLNAME_CAST(sipName_TryAfter), SIP_MLMETH_CAST(meth_wxProcess_TryAfter), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_TryBefore), SIP_MLMETH_CAST(meth_wxProcess_TryBefore), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR}
};

sipVariableDef variables_wxProcess[] = {
    {PropertyVariable, sipName_Pid, &methods_wxProcess[7], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_OutputStream, &methods_wxProcess[6], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_InputStream, &methods_wxProcess[5], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_ErrorStream, &methods_wxProcess[4], SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxProcess, "Process(parent=None, id=-1)\n"
"Process(flags)\n"
"\n"
"The objects of this class are used in conjunction with the wxExecute()\n"
"function.");


sipClassTypeDef sipTypeDef__core_wxProcess = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxProcess,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_Process,
        {0, 0, 1},
        18, methods_wxProcess,
        0, SIP_NULLPTR,
        4, variables_wxProcess,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxProcess,
    -1,
    -1,
    supers_wxProcess,
    SIP_NULLPTR,
    init_type_wxProcess,
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
    dealloc_wxProcess,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxProcess,
    cast_wxProcess,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};