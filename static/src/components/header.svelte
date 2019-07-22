<script>
    import { Link } from "svelte-routing"
</script>

<nav class="navbar navbar-light bg-light">
    <a class="navbar-brand">Sol Firebase</a>
    <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span>
    </button>
    <div class="collapse navbar-collapse" id="navbarNav">
        <ul class="navbar-nav">
            <li class="nav-item active">
                <Link class="nav-link" to="/">Index</Link>
            </li>
            <li class="nav-item active">
                <Link class="nav-link" to="about">About</Link>
            </li>
            <li class="nav-item active">
                <Link class="nav-link" to="contact">Contact</Link>
            </li>
        </ul>
    </div>
</nav>